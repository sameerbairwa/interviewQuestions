
/*
Problem: print Hollow Half Pyramid using star
Input format: n
n: number of rows 

Output format: Hollow Half Pyramid
Example: 10


*
**
* *
*  *
*   *
*    *
*     *
*      *
*       *
**********

*/

#include <iostream>
using namespace std;

int main() {
	int n = 10;
  
  for(int i=0; i<n; i++){
    for (int j=0; j<= i; j++){
      if(i==j || i==n-1 || j==0 ){
        cout << "*";
      }
      else{
        cout << " ";
      }
    }

    cout << endl;
  }
	return 0;
}
/*


*/