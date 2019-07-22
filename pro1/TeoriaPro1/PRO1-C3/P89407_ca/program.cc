#include <iostream>
#include <vector>
using namespace std;

void acumula(int n, int b, vector<int>& v) {
	if (n > 0) {
		++v[n%b];
		acumula(n/b, b, v);
	}
}

bool mateixos_digits(int x, int y, int b) {
	vector<int> v1(b, 0);
	acumula(x, b, v1);
	acumula(y, b, v1);
	vector<int> v2(b, 0);
	acumula(x*y, b, v2);
	for (int i = 0; i < b; ++i) if (v1[i] != v2[i]) return false;
	return true;
}

char digit(int d) {
	if (d > 9) return 'A' + d - 10;
	return '0' + d;
}

void escriu(int n, int b) {
	if (n > 0) {
		escriu(n/b, b);
		cout << digit(n%b);
	}
}

void escriu_linia(int x, int y, int b) {
	escriu(x, b);
	cout << " * ";
	escriu(y, b);
	cout << " = ";
	escriu(x*y, b);
	cout << " (base " << b << ")" << endl;
}

int main() {
	int x, y;
	while (cin >> x >> y) {
		cout << "solucions per a " << x << " i " << y << endl;
		bool trobat = false;
		for (int b = 2; b <= 16; ++b) {
			if (mateixos_digits(x, y, b)) {
				escriu_linia(x, y, b);
				trobat = true;
			}
		}
		if (not trobat) cout << "cap" << endl;
		cout << endl;
	}
}