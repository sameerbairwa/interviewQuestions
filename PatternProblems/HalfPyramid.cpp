/*

Problem: print Half Pyramid using star
Input format: n
n: number of rows 

Output format: Half Pyramid
Example: 10

/*

*
**
***
****
*****
******
*******
********
*********
**********

*/

#include <iostream>
using namespace std;

int main() {
	int n = 10;
  
  for(int i=0; i<n; i++){
    for (int j=0; j<= i; j++){
        cout << "*";
    }

    cout << endl;
  }
	return 0;
}
