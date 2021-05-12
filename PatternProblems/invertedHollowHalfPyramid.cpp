/*
Problem: print Inverted Hollow Half Pyramid using star
Input format: n
n: number of rows 

Output format: Inverted Hollow Half Pyramid
Example: 10

**********
*       *
*      *
*     *
*    *
*   *
*  *
* *
**
*

*/

#include <iostream>
using namespace std;

int main() {
  
  int n =10;
  for(int i=0; i<n; i++){
    for(int j=n-1; j>= i ; j--)
    {
      if(i==j || i==0 || j==n-1)
      {
        cout << "*";
      }else{
        cout << " ";
      }
    }
    cout << endl;
  }
	return 0;
}
