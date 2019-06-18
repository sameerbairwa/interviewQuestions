/*You are given with an array of integers that contain numbers in random order. Write a program to find and return the number which occurs maximum times in the given input.
If more than one element occurs same number of times in the input, return the element which is present in the input first.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Output Format :
Most frequent element
Constraints :
1 <= N <= 10^5
Sample Input 1 :
13
2 12 2 11 12 2 1 2 2 11 12 2 6 
Sample Output 1 :
2
Sample Input 2 :
3
1 4 5
Sample Output 2 :
1 
*/
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int mostFrequent(int *input, int n){	 
    unordered_map<int, int> mymap;
    int max = 0;
    int index = 0;
    for(int i=0; i<n; i++){
        mymap[input[i]] = mymap[input[i]] + 1;
        if(mymap[input[i]] > max){
            max = mymap[input[i]]; 
            index = i;
        }
    }
    return input[index];
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int output = mostFrequent(arr,n);
    cout << "Most Frequent element in array is " << output << endl;
    return 0;
}

