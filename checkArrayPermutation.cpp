#include <iostream>
#include<unordered_map>
using namespace std;

int checkPermutation(int arr, int n){
    unordered_map<int , int> map;
    for(int i=0; i<n; i++){
        map[arr[i]]++;
    }
    int i=1;
    for(int i=1; i<= n; i++){
        if(map.count(map[i]) == 1 ){
            continue;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << checkPermutation(arr,n);
    return 0;
}