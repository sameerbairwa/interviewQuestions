#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> removeDuplicate(int* arr, int size){

    vector<int> v;
    unordered_map<int, bool> mymap;
    for(int i = 0; i < size; i++){
        if(mymap.count(arr[i]) > 0){
            continue;
        }
        v.push_back(arr[i]);
        mymap[arr[i]] = true;
    }
    return v;
}
int main(){
    int arr[] = {1,2,3,3,2,1,4,3,6,5,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    vector<int> output = removeDuplicate(arr,size);
    for(int i=0; i < output.size(); i++){
        cout << output[i] << endl;
    }
    return 0;
}