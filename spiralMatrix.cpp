
/*
Given an N*M 2D array, print it in spiral form. That is, first you need to print the 1st row, then last column, then last row and then first column and so on.
Print every element only once.
Input format :
Line 1 : N and M, No. of rows & No. of columns (separated by space) followed by N*M  elements in row wise fashion.
Sample Input :
 4 4 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
Sample Output :
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10 
*/


void spiralPrint(int **a, int m, int n){
    int i, k = 0, l = 0; 

  
    while (k < m && l < n) 
    { 
        for (i = l; i < n; ++i) 
        { 
            printf("%d ", a[k][i]); 
        } 
        k++; 
  
        for (i = k; i < m; ++i) 
        { 
            printf("%d ", a[i][n-1]); 
        } 
        n--; 
  
        if ( k < m) 
        { 
            for (i = n-1; i >= l; --i) 
            { 
                printf("%d ", a[m-1][i]); 
            } 
            m--; 
        } 
  
        if (l < n) 
        { 
            for (i = m-1; i >= k; --i) 
            { 
                printf("%d ", a[i][l]); 
            } 
            l++;     
        }         
    } 
}


