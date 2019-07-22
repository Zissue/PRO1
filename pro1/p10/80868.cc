#include <iostream>
using namespace std;

int nombre_digits(int n) {
    if (n >= 10) return 1+nombre_digits(n/10);
    return 1;
}

int main () {

    int n, rows;
    cin >> n >> rows;

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j <= i; j++) {
            if (j != 0) cout << "-" << n;
            else cout << n;
        }

        int digits = nombre_digits(n);
        int dots = 1 + 2*(rows-i-1)*(digits+1);
        for (int j = 0; j < dots; ++j) cout << '.';

        for (int j = 0; j <= i; j++) {
            if (j != 0) cout << "-" << n;
            else cout << n;
        }

        cout << endl;
    }
}