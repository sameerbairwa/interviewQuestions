#include<bits/stdc++.h>
using namespace std;
//recursive solution with O(3^n) complexity
int countStepsTo1(int n){
    if(n == 1){
        return 0;
    }
    int option1 = 1 + countStepsTo1(n-1);
    int option2 = INT_MAX;
    if(n%2 == 0){
        option2 = 1 + countStepsTo1(n/2);
    }
    int option3 = INT_MAX;
    if(n%3 == 0){
        option3 = 1 + countStepsTo1(n/3);
    }
    return min(option3,min(option1,option2));
}

// dynamic programming solution
int countStepsTo1DP(int n){
    if(n == 1){
        return 0; 
    }
    int DP[n+1] = {0};
    for(int i=2; i<n+1; i++){
        int option1 = 1+DP[i-1];
        int option2 = INT_MAX;
        int option3 = INT_MAX;
        if(i%2 == 0){
            option2 = 1+ DP[i/2];
        } 
        if(i%3 == 0){
            option3 = 1 + DP[i/3];
        }
        DP[i] = min(option3,min(option1,option2));
    }
    return DP[n];
}

    int
    main()
{
    int n;
    cin >> n;
    int result = countStepsTo1(n);
    cout << result;

    return 0;
}