#include <iostream>
using namespace std;

int power2 (int n) {
    if (n == 0) return 1;
    if (n == 1) return 2;
    else return 2*power2(n-1);
}

int main () {
    int n;
    while (cin >> n) {
        cout << power2(n) << endl;
    }
}