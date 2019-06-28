#include <iostream>
using namespace std;
// dynamic memory allocated in heap at run time 
// static memory allocated in stack befor run time, at compile time 

int main() {
	int * p = new int; // dynamic memory for a integer
	*p = 10; // decalare a value on dynamic memory p
	cout << *p << endl;

	double *pd = new double;

	char* c = new char;

	int* pa = new int[50]; // dynamic memory for an array size of 50
	int n;
	cout << "Enter num of elements" << endl; 
	cin >> n;

	int* pa2 = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> pa2[i];
	}

}

