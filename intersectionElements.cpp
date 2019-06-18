// input1 - first array
// input2 - second array
// size1 - size of first array
// size2 - size of second array
#include<unordered_map>
void intersection(int arr1[], int arr2[], int m, int n) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print the output and don't return it.
     * Taking input is handled automatically.
     */
    unordered_map<int, int> mymap;
    if(m > n){
        for(int i=0; i<m; i++){
            mymap[arr1[i]]++;
        }
        for(int i=0; i<n; i++){
            if(mymap[arr2[i]] > 0 ){
                cout << arr2[i] << endl;
                mymap[arr2[i]]--;
            }
        }
    }
    else{
        for(int i=0; i<n; i++){
            mymap[arr2[i]]++;
        }
        for(int i=0; i<m; i++){
             if(mymap[arr1[i]] > 0 ){
                cout << arr1[i] << endl;
                mymap[arr1[i]]--;
            }
        }
        
        
    }

}
