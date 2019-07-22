#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool es_prefix(string s1, string s2) {
	for (int i = 0; i < s2.size(); ++i) if (s1[i] != s2[i]) return false;
	return true;
}

int main() {
	int n;
	while (cin >> n) {
		vector<string> v(n);
		for (int i = 0; i < n; ++i) cin >> v[i];
		cin >> n;
		for (int i = 0; i < n; ++i) {
			string prefix;
			cin >> prefix;
			cout << "Comencen amb " << prefix << ':' << endl;
			for (int j = 0; j < v.size(); ++j) {
				if (v[j].size() >= prefix.size() and es_prefix(v[j], prefix)) cout << v[j] << endl;
			}
		}
	}
}