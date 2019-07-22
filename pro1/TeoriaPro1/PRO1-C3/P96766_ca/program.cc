#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool es_palindrom(string s) {
	int m = s.size();
	for (int i = 0; i < m/2; ++i) if (s[i] != s[m - i - 1]) return false;
	return true;
}

int main() {
	int n;
	cin >> n;
	while (n > 0) {
		vector<string> v(n);
		int maxim = 0;
		for (int i = 0; i < n; ++i) {
			cin >> v[i];
			int m = v[i].size();
			if (m > maxim and es_palindrom(v[i])) maxim = m;
		}
		cout << "-----" << endl;
		if (maxim == 0) cout << "cap palindrom" << endl;
		else {
			for (int i = 0; i < n; ++i) {
				if (v[i].size() == maxim and es_palindrom(v[i])) cout << v[i] << endl;	
			}
		}
		cin >> n;
	}
	cout << "-----" << endl;
}