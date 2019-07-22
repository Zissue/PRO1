#include <iostream>
#include <string>
using namespace std;

string suma(string x, string y) {
	int m = x.size();
	int n = y.size();
	string z(m + 1, '0');
	int carry = 0;
	for (int i = 0; i < m; ++i) {
		int val = carry + x[m - i - 1] - '0';
		if (i < n) val += y[n - i - 1] - '0';
		z[m - i] = val%10 + '0';
		carry = val/10;
	}
	z[0] += carry;
	return z;
}

int main() {
	string x, y;
	while (cin >> x >> y) cout << suma(x, y) << endl;
}