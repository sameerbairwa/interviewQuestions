#include<bits/stdc++.h>
using namespace std;
int kthLargest (int arr[], int n, int k){

    priority_queue<int> pq;
    for(int i=0; i<n; i++){
        pq.push(arr[i]);
    }
    for(int i=0; i<k-1; i++){
        pq.pop();
    }
    return pq.top();
    
}

int main(){
    int arr[] = {9, 4, 8, 7, 11, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << kthLargest(arr,n, 2) << endl;
}
