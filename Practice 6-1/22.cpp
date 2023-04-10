#include <iostream>
using namespace std;

int sum(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n + sum(n - 1);
	}
	
}

void main() {
	cout << "\n";
	cout << " 1+...+4 = " << sum(4) << "\n";
	cout << " 1+...+6 = " << sum(6) << "\n";
	cout << " 1+...+10 = " << sum(10) << "\n";

}