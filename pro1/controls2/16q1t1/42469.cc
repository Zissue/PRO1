#include <iostream>
using namespace std;

int operation(int n) {
    int r = 0;
    if (n == 0) return 0;
    else {
        return r = r + operation(n-1);
    }
}

int main() {
    int n;
    while (cin >> n) {
        cout << operation(n) << endl;
    }
}