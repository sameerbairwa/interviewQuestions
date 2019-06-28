#include <iostream>
using namespace std;

int main() {

	int *p = new int; // dynamically allocated memory will not delete until we not delete it 
	delete p; // delete the memory

	p = new int;
	delete p;

	p = new int[100];
	delete [] p;  // array memory delete

	/*
	while (true) {
		int *p = new int;
	}
	
	while (true) {
		int i = 10;
	}
*/

}

