
/*
Problem: print Half Pyramid Rotated 180 using star
Input format: n
n: number of rows 

Output format: Half Pyramid Rotated 180
Example: 


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
  int c = n-1;
  
  for(int i=0; i<n; i++){
    for (int j=0; j<c; j++){
      cout << " ";
    }
    for(int j=0; j<= i; j++){
      cout << "*";
    }
    c--;
    cout << endl;
  }
	return 0;
}

