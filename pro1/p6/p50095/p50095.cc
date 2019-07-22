#include <iostream>
using namespace std;

int primer (int n) {
    if (n == 0 or n == 1) return false;
    else {
        for (int i = 2; i*i <= n; ++i) if (n % i == 0) return false;
        return true;
    }
}

int main () {
    int i;
    while (cin >> i and primer(i)) {
        bool found = false;
        while (!found) {
            i++;
            if (primer(i)) found = true;
        }
        cout << i << endl;
    }
}