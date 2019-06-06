#include <iostream>
using namespace std;

// n - number of rows given
/*
Print the following pattern for the given number of rows.
Pattern for N = 5
 1    2   3    4   5
 11   12  13   14  15
 21   22  23   24  25
 16   17  18   19  20
 6    7    8   9   10
*/
void printPattern(int n){
	// Write your code here
    int a=0, b=n-1,c=1;
    int arr[n][n];
    for(int i=0; i<n; i++)
    {
        if(i%2==0){
            for(int j=0; j<n; j++){
                arr[a][j] = c;
                c++;
            }
            a++;
        }
        else{
            for(int j=0; j<n; j++){
                arr[b][j] = c;
                c++;
            }
            b--;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
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