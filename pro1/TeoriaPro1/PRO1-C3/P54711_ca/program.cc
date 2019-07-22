#include <iostream>
using namespace std;

void escriu_maia(int n) {
	if (n/20 > 0) escriu_maia(n/20);
	int d = n%20;
	if (d == 0) cout << "zero" << endl;
	else {
		int p = d%5;
		if (p > 0) {
			for (int i = 0; i < p; ++i) cout << '.';
			cout << endl;
		}
		for (int i = 0; i < d/5; ++i) cout << "-----" << endl;
	}
}

int main() {
	int n;
	while (cin >> n) {
		cout << n << endl;
		escriu_maia(n);
	}
}