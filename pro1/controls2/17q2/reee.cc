#include <iostream>
using namespace std;

int main() {
	int c = 1;
	string x = "", x0;
	bool first = true;

    cin >> x0;
	while (cin >> x) {
		if (x == x0) c++;
		else {
			if (not first) cout << " + ";
			cout << x0;
			if (c > 1) cout << "*" << c;
			first = false;
			c = 1;
		}
		x0 = x;
	}

	if (not first) cout << " + ";
	if (x == "") cout << x0;
	else cout << x;
	if (c > 1) cout << "*" << c;
	cout << endl;
}