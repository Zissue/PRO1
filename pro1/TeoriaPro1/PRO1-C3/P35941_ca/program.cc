#include <iostream>
#include <map>
using namespace std;

int main() {
	string s;
	while (cin >> s) {
		map<char, char> m;
		m['_'] = ' ';
		char c = 'a';
		for (int i = 0; i < 26; ++i) m[s[i]] = char(c+i);
		int n;
		cin >> n;
		for (int i = 0; i < n; ++i) {
			cin >> s;
			for (int j = 0; j < s.size(); ++j) {
				map<char, char>::iterator it = m.find(s[j]);
				cout << it->second;
			}
			cout << endl;
		}
		cout << endl;
	}
}