#include <iostream>
using namespace std;

int main () {
    int n, x, mx;
    while (cin >> n) {
        cin >> x;
        mx = x;
        for (int i = 0; i < n-1; i++) {
            cin >> x;
            mx = max(x,mx);
        }
        cout << mx << endl;
    }
}