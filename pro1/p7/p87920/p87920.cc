#include <iostream>
#include <vector>
using namespace std;

int main () {
    bool si;
    int n, x, sum;
    while (cin >> n) {
        sum = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> x;
            v[i] = x;
            sum = sum + v[i];
        }
        si = false;
        for (int i = 0; i < n and !si; i++) {
            if (v[i] == sum - v[i]) si = true;
        }
        if (si) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}