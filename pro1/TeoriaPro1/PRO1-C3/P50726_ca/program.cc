#include <iostream>
#include <string>
#include <vector>
using namespace std;

const int MAX = 16;

string concatena(string a, string b) {
	int n = a.size();
	int m = b.size();
	string c(n + m, ' ');
	for (int i = 0; i < n; ++i) c[i] = a[i];
	for (int i = 0; i < m; ++i) c[i + n] = b[i];
	return c;
}

int posicio(string s, const vector<string>& v) {
	for (int i = 0; i < MAX; ++i) if (v[i] == s) return i;
	return -1;
}

int main() {
	vector<string> v(MAX);
	v[0] = "a";
	v[1] = "b";
	for (int i = 2; i < MAX; ++i) v[i] = concatena(v[i - 2], v[i - 1]);
	string s;
	while (cin >> s) {
		int pos = posicio(s, v);
		if (pos < 0) cout << s << " no es de Fibonacci" << endl;
		else cout << s << " es la paraula numero " << pos + 1 << endl;
	}
}