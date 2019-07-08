#include<iostream>
using namespace std;

void arrayRotation(int *arr, int n,int d){
    for (int k = d; k < n; k++)
    {
        cout << arr[k] << " ";
    }
    for (int k = 0; k < d; k++)
    {
        cout << arr[k] << " ";
    }
}
int main() {
	//code   
	int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        int d;
        cin >> d;
        d = d%n;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        arrayRotation(arr,n,d);
        cout << endl;
    }
	//code
	return 0;
}
