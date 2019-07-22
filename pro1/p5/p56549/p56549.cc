#include <iostream>
using namespace std;

void canvi_base (int n, int b) {
    if (n > 0) {
        canvi_base(n/b, b);
        int x = n%b;
        if (x > 9) {
            if (x > 15) cout << 'F';
            else cout << char('A' + x - 10);
        }
        else cout << x;
    }
}

int main() {
    int n;
    while (cin >> n) {
        cout << n << " = ";
        if (n == 0) cout << 0 << ", " << 0 << ", " << 0 << endl;
        else {
            canvi_base(n, 2);
            cout << ", ";
            
            canvi_base(n, 8);
            cout << ", ";

            canvi_base(n, 16);
            cout << endl;
        }
    }
}