#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[32]; // lenght 32 can store 4294967296 in binary form 
    int i=0;
    while(n > 0){ // for convert decimal to binary
        arr[i] = n%2;
        n = n/2;
        i++;
    }// lenght of the array that values are stored is i-1
    int max=0; // for maximum zeros between two ones 
    int c=0;
    for(int j=0; j <= i-1; j++){  // the for loop for track first 1 in the array 
        if(arr[j]==1){
            c = j;
            break;
        }
    }
    int a=c,b=c; // 
    for(int j=c; j <= i-1; j++){
        if(arr[j]==1){
            b = j;
            if(max < b - a -1){
                max = b - a - 1;
            }
            a = b;  // update value of a for next zeros interval 
        }
    }
    cout << max;
    return 0;
}