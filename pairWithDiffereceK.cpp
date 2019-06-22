#include <iostream>
#include <unordered_map>
using namespace std;

void printPairs(int *arr, int n, int k) {
	unordered_map<int, int> mymap;
    for(int i=0; i<n; i++){
        mymap[arr[i]]++;
    }
    for(int i=0; i<n; i++){
        if(mymap.count(arr[i]+k) > 0){
            int x = arr[i] + k;
            if(k != 0 ){
                for(int j=0; j<mymap[x] * mymap[arr[i]]; j++){
                    if(x > arr[i]){
                        cout << arr[i] << " " << x << endl;
                    }
                    else{
                        cout << x << " " << arr[i] << endl;
                    }
                }
            }
            else{
                int c = mymap[x];
                c = c-1;
                for(int j=0; j<c*(c-1)/2; j++){
                    cout << x <<" " << x <<endl;
                }
            }
        }
        if(mymap.count(arr[i] - k) > 0){
            int x = arr[i] - k;
            if(k != 0 ){
                for(int j=0; j<mymap[x] * mymap[arr[i]]; j++){
                    if(x > arr[i]){
                        cout << arr[i] << " " << x << endl;
                    }
                    else{
                        cout << x << " " << arr[i] << endl;
                    }
                }
            }
            else{
                int c = mymap[x];
                c = c-1;
                for(int j=0; j<c*(c-1)/2; j++){
                    cout << x <<" " << x <<endl;
                }
            } 
        }
        mymap[arr[i]] = 0;
    }

}


int main(){


    return 0;
}