#include <vector>
#include <iostream>
using namespace std;

int posicio_maxim(const vector<double>& v, int m) {
    double max = v[0]; 
    int pos = 0;
    for (int i = 1; i <= m; i++) {
        if (v[i] > max) {
            max = v[i];
            pos = i;
        }
    }
    return pos;
}

int main () {
    int n, m;
    cin >> n >> m;
    vector<double> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    cout << posicio_maxim(v,m);
}