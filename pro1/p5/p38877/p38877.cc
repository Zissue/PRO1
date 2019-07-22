#include <iostream>
using namespace std;

void reverse(int& n) {
    string s;
    if (cin >> s) {
        reverse (n);
        if (n > 0) cout << s << endl;
        n--;
    }
}

int main () {
    int n;
    cin >> n;
    reverse(n);
}