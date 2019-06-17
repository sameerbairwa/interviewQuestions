#include<iostream>
using namespace std;

/*

Print the following pattern for n number of rows.
For eg. N = 5

1        1
12      21
123    321
1234  4321
1234554321
*/

int main() {
    int n; //  declare a variable for number of rows 
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=1; j<=i+1; j++){
            cout << j;
        }
        for(int k=0; k<n*2-2 - 2*i ; k++)
        {
            cout << " ";
        }
        for(int j=i+1; j>=1; j--){ // for print number left to right 
            cout << j;
        }
        cout << "\n";
    }
	
}
