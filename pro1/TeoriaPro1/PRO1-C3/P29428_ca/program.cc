#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Indica si s2 és un infix de s1 començant a la posició i.
bool es_infix(string s1, string s2, int i) {
	for (int j = 0; j < s2.size(); ++j) if (s1[i+j] != s2[j]) return false;
	return true;
}

// Indica si s1 conté s2. Precondició: la llargada de s1 és més gran o igual que la llargada de s2.
bool conte(string s1, string s2) {
	for (int i = 0; i <= s1.size()-s2.size(); ++i) if (es_infix(s1, s2, i)) return true;
	return false;
}

int main() {
	int n;
	cin >> n;
	vector<string> v(n);
	for (int i = 0; i < n; ++i) cin >> v[i];
	for (int i = 0; i < n; ++i) {
		cout << v[i] << ":";
		for (int j = 0; j < n; ++j) if (v[i].size() >= v[j].size() and conte(v[i], v[j])) cout << " " << v[j];
		cout << endl;
	}
}