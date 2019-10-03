#include<iostream>
using namespace std;
int main() 
{
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];

	int lo = 0, mid = 0, high = n-1;
	while(mid<high)
	{
		if(a[mid]== 2)
		{	
			swap(a[mid], a[high]);
			high--;
		}
		else if(a[mid]==0)
		{
			swap(a[lo], a[mid]);
			mid++;
			lo++;
		}
		else
			mid++;
	}
	for (int i=0;i<n;i++)
		cout<<a[i]<<endl;	
	return 0;
}