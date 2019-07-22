#include <iostream>
using namespace std;

void reverse(int& n) {
    string s;
    if (cin >> s) {
        n++;
        reverse (n);
        if (n <= 0) cout << s << endl;
        n = n - 2;
    }
}

int main () {
    int n = 0;
    reverse(n);
}