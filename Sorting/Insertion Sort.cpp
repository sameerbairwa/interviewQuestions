#include<iostream>
using namespace std;
int main() 
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];	
	}
	for(int i =1;i<n;i++)
	{
		int j, no = a[i];
		for(j = i-1;j>=0 && a[j]>no ;j--)
		{
			a[j+1] = a[j];
		} 
		a[j+1] = no;
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;	
	}
	return 0;
}