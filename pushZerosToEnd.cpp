// arr - input array
// n - size of array
/*
Given a random integer array, push all the zeros that are present to end of the array. The respective order of other elements should remain same.
Change in the input array itself. You don't need to return or print elements. Don't use extra array.
Note : You need to do this in one scan of array only.
Input format :
Line 1 : Integer N, Array Size
Line 2 : Array elements (separated by space)
Output Format :
Array elements (separated by space)
Constraints :
1 <= N <= 10^6
Sample Input 1:
7
2 0 4 1 3 0 28
Sample Output 1:
2 4 1 3 28 0 0
Sample Input 2:
5
0 3 0 2 0
Sample Output 2:
3 2 0 0 0
*/

void PushZeroesEnd(int arr[], int n){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * No need to return or print the output.
     * Taking input and printing output is handled automatically.
     */
    int arr2[n];
    int i=0, j=n-1;
    for(int k=0; k<n; k++){
        if(arr[k]==0){
            arr2[j] = arr[k];
            j--;
        }
        else{
            arr2[i] = arr[k];
            i++;
        }
    }
    for(int i=0; i<n; i++){
        arr[i] = arr2[i];
    }
    

}
