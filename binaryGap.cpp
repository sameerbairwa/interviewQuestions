#include<iostream>
using namespace std;

/* Problem: 
A binary gap within a positive integer N is any maximal sequence of consecutive zeros 
that is surrounded by ones at both ends in the binary representation of N.

For example, number 9 has binary representation 1001 and contains a binary gap of length 2.
The number 529 has binary representation 1000010001 and 
contains two binary gaps: one of length 4 and one of length 3. 
The number 20 has binary representation 10100 and contains one binary gap of length 1. 
The number 15 has binary representation 1111 and has no binary gaps. 
The number 32 has binary representation 100000 and has no binary gaps.
*/

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