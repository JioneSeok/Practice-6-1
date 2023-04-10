#include <iostream>
using namespace std;
float cel2faren(float cc) {
	return cc * 9.0 / 5.0 + 32;
}

void main() {
	float cel1, cel2, faren, faren1;
	cel1 = 30.0;
	cel2 = 100;
	faren = cel2faren(cel1);
	faren1 = cel2faren(cel2);
	cout << "faraen=" << faren << endl;
	cout << "faraen1=" << faren1 << endl;

}