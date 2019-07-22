#include <iostream>
#include <vector>
using namespace std;

bool es_primer (int n) {
    if (n <= 1) return false;
    for (int i = 2; i*i <= n; ++i) {
        if (n%i == 0) return false;
    }
    return true;
}

int main () {
    int n, x, sum;
    bool found;
    while (cin >> n) {
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> x;
            v[i] = x;
        }
        found = false;
        sum = 0;
        for (int i = 0; i < n and !found; i++) {
            for (int j = 0; j < n and !found; j++) {
                if (i != j) {
                    sum = sum + v[j];
                    if (es_primer(sum)) found = true;
                }
                sum = v[i];
            }
        }
        if (found) cout << "si";
        else cout << "no";
        cout << endl;
    }
}