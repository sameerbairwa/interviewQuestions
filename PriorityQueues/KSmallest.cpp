/*
Code : K smallest Elements
Send Feedback
You are given with an integer k and an array of integers that contain numbers in random order. Write a program to find k smallest numbers from given array. You need to save them in an array and return it.
Time complexity should be O(nlogk) and space complexity should be not more than O(k).
Order of elements in the output is not important.
Input Format :
Line 1 : Size of array (n)
Line 2 : Array elements (separated by space)
Line 3 : Integer k
Output Format :
k smallest elements
Sample Input 1 :
13
2 12 9 16 10 5 3 20 25 11 1 8 6 
4
Sample Output 1 :
5
3
2
1
*/
#include<iostream>
#include<queue>
using namespace std;

void kSmallest(int input[], int n, int k) {
	// Write your code here
    vector<int> v;
    priority_queue <int, vector<int>, greater<int> > pq;
    for(int i=0; i<n; i++){
        pq.push(input[i]);
    }
    for(int i=0; i<k; i++){
        v.push_back(pq.top());
        pq.pop();
    }
    for(int i=0; i<k; i++){
        cout << v[i] << " ";
    }
}

int main(){
    int arr[] = {2,12,9,16,10,5,3,25,11,1,8,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    kSmallest(arr,n,5);

}
