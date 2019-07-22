#include <iostream>
using namespace std;

int main () {
    int k = 1;
    string s0 = "", s = "";
    bool first = true;

    cin >> s0;
    while (cin >> s) {
        if (s == s0) k++;
        else {
            if (!first) cout << " + ";
            cout << s0;
            if (k > 1) cout << "*" << k;
            first = false;
            k = 1;
        }
        s0 = s;
    }

    if (!first) cout << " + ";
    if (s == "") cout << s0;
	else cout << s;
	if (k > 1) cout << "*" << k;
	cout << endl;
}