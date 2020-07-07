/*
Problem: print Hollow rectangle using star
Input format: n m 
n: number of rows 
m: number of columns 

Output format: solid rectangle 
Example: 4 5

* * * * *
*       *
*       *
* * * * * 

*/

/*
Problem: print Hollow rectangle using star
Input format: n m 
n: number of rows 
m: number of columns 

Output format: solid rectangle 
Example: 4 5

* * * * *
*       *
*       *
* * * * * 

To create a hollow rectangle we need at least 3 rows and 3 columns

*/



#include <iostream>
using namespace std;

void printHollowRectangle(int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n"; // cout << endl;
    }
}
int main()
{
    int n, m;
    // n => number of rows
    // m => number of columns
    cin >> n >> m;
    printHollowRectangle(n, m);
}
