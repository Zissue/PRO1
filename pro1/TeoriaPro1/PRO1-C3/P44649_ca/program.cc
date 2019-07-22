#include <iostream>
#include <vector>
using namespace std;

const int MAX = 100;

typedef vector<char> Fila;
typedef vector<Fila> Matriu;

int main() {
	int mida, sortida, fila;
	cin >> mida >> sortida >> fila;
	Matriu m(mida, Fila(MAX, '.'));
	for (int i = 0; i < mida; ++i) m[i][0] = '|';
	m[sortida][0] = '=';
	m[fila][1] = 'V';
	int inc = 1;
	int col = 1;
	int k = 0;
	int pw = 1;
	while (fila != sortida) {
		fila += inc;
		++col;
		m[fila][col] = 'V';
		++k;
		if (k == pw) {
			inc = -inc;
			k = 0;
			pw *= 2;
		}
	}
	for (int i = 0; i < mida; ++i) {
		for (int j = 0; j <= col; ++j) cout << m[i][j];
		cout << endl;
	}
}