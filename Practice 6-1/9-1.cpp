#include <iostream>
using namespace std;

void fn(int* ii) {
	cout << " *ii = " << *ii << endl;
	*ii *= 100;
}

void main() {
	int i = 5;
	fn(&i);
	cout << " i = " << i << endl;
}