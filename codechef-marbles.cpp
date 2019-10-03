//CodeChef-Marbles
//https://www.codechef.com/problems/MARBLES
//Explanation:-medium.com/@svaish97


#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll c(ll n,ll r){   //function to compute nCr
 ll res=1;
 if(r>n/2){
 r=n-r;
 }
 
 for(int i=0;i<r;i++){
 res*=n;
 res/=i+1;
 n--;
 }
 return res;
}
int main() {
 int t; //test cases
 cin>>t;
 while(t--){
 int n,k;
 cin>>n>>k;
 cout<<c(n-1,n-k)<<endl;
 }
 return 0;
}