#include <iostream>
#include <vector>
using namespace std;

typedef vector<char> Fila;
typedef vector<Fila> Matriu;

void mou(int& i, int& j, char d) {
	if (d == 'N') --i;
	else if (d == 'S') ++i;
	else if (d == 'E') ++j;
	else --j;
}

char opo(char d) {
	if (d == 'N') return 'S';
	if (d == 'S') return 'N';
	if (d == 'E') return 'O';
	return 'E';
}

int simula(Matriu& m, int i, int j, string s) {
	int suma = 0;
	for (int k = 0; k < s.size(); ++k) {
		mou(i, j, s[k]);
		while (m[i][j] != 'X') {
			if (m[i][j] != '.') {
				suma += m[i][j] - '0';
				m[i][j] = '.';
			}
			mou(i, j, s[k]);
		}
		mou(i, j, opo(s[k]));
	}
	return suma;
}

int main() {
	int cas = 1;
	int f, c;
	while (cin >> f >> c) {
		Matriu m(f, Fila(c));
		for (int i = 0; i < f; ++i) for (int j = 0; j < c; ++j) cin >> m[i][j];
		int i, j;
		string s;
		cin >> i >> j >> s;
		cout << "Cas " << cas << ": " << simula(m, i, j, s) << endl;
		++cas;
	}
}