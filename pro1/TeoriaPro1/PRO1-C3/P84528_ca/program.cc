#include <iostream>
#include <vector>
using namespace std;

int main() {
	int f, c;
	cin >> f >> c;
	vector<vector<char> > v(f, vector<char>(c));
	for (int i = 0; i < f; ++i) for (int j = 0; j < c; ++j) cin >> v[i][j];
	char d;
	int y;
	while (cin >> d >> y) {
		cout << d << y << ": ";
		int x = d - 'a';
		if (v[x][y] == '.') cout << "aigua" << endl;
		else if (v[x][y] == 'T') cout << "tocat" << endl;
		else {
			v[x][y] = 'T';
			int esq = y - 1;
			while (v[x][esq] == 'T') --esq;
			int dre = y + 1;
			while (v[x][dre] == 'T') ++dre;
			if (v[x][esq] == '.' and v[x][dre] == '.') {
				cout << "enfonsat" << endl;
				for (int j = esq + 1; j < dre; ++j) v[x][j] = '.';
			}
			else cout << "tocat" << endl;
		}
	}
	cout << endl;
	for (int i = 0; i < f; ++i) {
		for (int j = 0; j < c; ++j) cout << v[i][j];
		cout << endl;
	}
}