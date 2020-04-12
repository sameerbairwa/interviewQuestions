//Array Rotation reversal algorithm

#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int start, int end){
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
}

void arrayRotation(int arr[], int n, int d){
    if(d==0){
        return;
    }
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n,d;
    cin >> n >> d;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    d = d%n;
    arrayRotation(arr,n,d);
    print(arr,n);
    return 0;
}