#include <iostream>
using namespace std;

int suma(int n) {
    if (n > 0) return n = n + suma(n-1);
    else return 0;
}

int main () {
    int n, x, r;
    while (cin >> n) {
        r = 0;
        for (int i = 0; i < n-1; i++) {
            cin >> x;
            r = r + x;
        }
        cout << suma(n) - r << endl;
    }
}