#include <iostream>
using namespace std;

void PrintMe(int ii) {
	cout << " I am " << ii << " years old.\n";
}

void PrintMe(float jj) {
	cout << " I am " << jj << " cm tall.\n";
}

void PrintMe(short kk) {
	cout << " I am " << kk << " kg.\n";
}

void PrintMe(int ii, float jj, short kk) {
	PrintMe(ii);
	PrintMe(jj);
	PrintMe(kk);
}

void main() {
	float height = 180.0;
	int age = 22;
	short weight = 70;
	PrintMe(age);
	PrintMe(height);
	PrintMe(weight);
	PrintMe(age, height, weight);
}
