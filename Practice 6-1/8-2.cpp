#include <iostream>
using namespace std;

int fn(int ii) {
	return ii;
}

void main() {
	int i = 5, a;
	
	a = fn(i) * 100;
	cout << " i = " << i << endl;
	cout << " a = " << a << endl;
}