#include<iostream>
using namespace std;
	/* Don't write main().
 	Don't read input, it is passed as function argument.
	Print pattern as per the question.
    Print the following pattern
Pattern for N = 5
5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5 
	*/  
void printPattern(int n){
    int k = n;
    int n2 = n;
    n = n*2-1;
    int arr[n][n];
    for(int i=0;i<n2; i++){
        for(int a=i; a<n; a++){
            arr[i][a] = k;
        }
        for(int b=i+1; b<n; b++){
            arr[b][n-1] = k;
        }
        for(int c=n-2; c>=i; c--){
            arr[n-1][c] = k;
        }
        for(int d=n-2; d>=i+1; d--){
            arr[d][i] = k;
        }
        n--;
        k--;
    }
    n2 = n2*2-1;
    for(int i=0;i<n2; i++){
        for(int j=0; j<n2; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}
int main(){
    int n;
    cin >>n;
    printPattern(n);
    return 0;
}