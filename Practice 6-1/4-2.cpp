#include <iostream>
using namespace std;
float faren2cel(float ff) {
	return (ff - 32) * 5 / 9;
}

void main() {
	float faren, cel;
	faren = 100;
	cel = faren2cel(faren);
	cout << "cel=" << cel << endl;
}
