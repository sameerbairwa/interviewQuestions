/*A non-empty array A consisting of N integers is given. The array contains an odd number of elements, and each element of the array can be paired with another element that has the same value, except for one element that is left unpaired.

For example, in array A such that:

  A[0] = 9  A[1] = 3  A[2] = 9
  A[3] = 3  A[4] = 9  A[5] = 7
  A[6] = 9
the elements at indexes 0 and 2 have value 9,
the elements at indexes 1 and 3 have value 3,
the elements at indexes 4 and 6 have value 9,
the element at index 5 has value 7 and is unpaired.
Write a function:

class Solution { public int solution(int[] A); }

that, given an array A consisting of N integers fulfilling the above conditions, returns the value of the unpaired element.

For example, given array A such that:

  A[0] = 9  A[1] = 3  A[2] = 9
  A[3] = 3  A[4] = 9  A[5] = 7
  A[6] = 9
the function should return 7, as explained in the example above.

Write an efficient algorithm for the following assumptions:

N is an odd integer within the range [1..1,000,000];
each element of array A is an integer within the range [1..1,000,000,000];
all but one of the values in A occur an even number of times.
 */
#include <iostream>
#include <unordered_map>
using namespace std;

long long oddOccurrence(long long arr[], int n){
    unordered_map<long long, int> map;
    for(int i=0; i<n;i++){
        map[arr[i]]++;
    }
    unordered_map<long long, int> :: iterator it;
    for(it = map.begin(); it != map.end(); it++){
        if(it->second %2 != 0 ){
            return it->first;
        }
    }

}


long long odd(long long arr[], int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == -1)
            {
                break;
            }
            else
            {
                if (arr[i] == arr[j])
                {
                    arr[i] = -1;
                    arr[j] = -1;
                    break;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != -1)
        {
            return arr[i];
        }
    }
}

int main(){
    int n;
    cin >> n;
    long long arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    // cout << odd(arr,n);
    cout << oddOccurrence(arr,n); // O(n) time complexity with O(n) space complexity 
    
    return 0;
}