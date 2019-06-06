#include<iostream>
using namespace std;
       /*  Read input as specified in the question.
	* Print output as specified in the question.
    Print the following pattern for the given number of rows.
Assume N is always odd.
Note : There is space after every star.
Pattern for N = 7
*
 * *
   * * *
     * * * *
   * * *
 * *
*
	*/

int main(){
    int n; 
    cin >> n;
    int space=0;
    for(int i=0; i<n/2 +1; i++){
        for(int j=0; j< i; j++){
            cout << " ";
        }
        for(int j=0; j<i+1; j++){
            cout << "* ";
        }
        cout << "\n";
    }
    for(int i=n/2; i>0; i--){
        for(int j=1; j<i; j++){
            cout << " ";
        }
        for(int j=0; j<i; j++){
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}


