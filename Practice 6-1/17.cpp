#include <iostream>
using namespace std;
void G2KG(int, float*, float*);
void KG2G(int, float*, float*);

void main() {
	float gram[] = { 20.0,30.,100. }, killo[3];
	G2KG(3, gram, killo);
	killo[0] = 4.0;
	killo[1] = 7.0;
	killo[2] = 9.0;
	KG2G(3, gram, killo);
}

void GKGout(int n, float* G, float* KG) {
	cout << "   G   " << "    KG  " << endl;
	for (int i = 0; i < n; i++)
		cout << "   " << G[i] << "   " << KG[i] << endl;
}

void G2KG(int n, float* G, float* KG) {
	for (int i = 0; i < n; i++) {
		KG[i] = G[i] / 1000;
	}
	GKGout(n, G, KG);
}

void KG2G(int n, float* G, float* KG) {
	for (int i = 0; i < n; i++) {
		G[i] = KG[i] * 1000;
	}
	GKGout(n, G, KG);
}