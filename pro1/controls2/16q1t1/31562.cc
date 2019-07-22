#include <iostream>
using namespace std;

int operation(int n) {
    int r = 0;
    for (int i = 1; i <= n; i++) {
        r = r + (i-1)*i;
    }
    return r;
}

int main() {
    int n;
    while (cin >> n) {
        cout << operation(n) << endl;
    }
}