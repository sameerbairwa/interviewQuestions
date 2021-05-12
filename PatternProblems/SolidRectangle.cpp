/*
Problem: print solid rectangle using star
Input format: n m 
n: number of rows 
m: number of columns 

Output format: solid rectangle 
Example: 3 5

* * * * *
* * * * *
* * * * * 

*/

#include <iostream>
using namespace std;

void printRectangle(int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "* ";
        }
        cout << "\n"; // cout << endl;
    }
}

int main()
{
    int n = 4, m = 5;
    // n => number of rows
    // m => number of columns
    // cin >> n >> m;
    printRectangle(n, m);
}

