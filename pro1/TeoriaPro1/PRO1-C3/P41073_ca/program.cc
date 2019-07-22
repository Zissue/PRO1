#include <iostream>
#include <string>
#include <vector>
using namespace std;

const int MAX = 4000000;

int eleva(int a, int b) {
	if (b == 0) return 1;
	return a * eleva(a, b - 1);
}

int godel(string s, const vector<int>& p) {
	int res = 1;
	for (int i = 0; i < s.size(); ++i) res *= eleva(p[i], s[i] - '0');
	return res;
}

int main() {
	vector<bool> primer(MAX, true);
	for (int i = 2; i*i < MAX; ++i) if (primer[i]) for (int j = 2*i; j < MAX; j += i) primer[j] = false;
	int n = 0;
	for (int i = 2; i < MAX; ++i) if (primer[i]) ++n;
	vector<int> p(n);
	int j = 0;
	for (int i = 2; i < MAX; ++i) {
		if (primer[i]) {
			p[j] = i;
			++j;
		}
	}
	string s;
	while (cin >> s) cout << s << " -> " << godel(s, p) << endl;
}