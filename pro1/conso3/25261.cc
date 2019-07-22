#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void readVector(vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        cin >> v[i];
    }
}

int main () {
    int n;
    while (cin >> n) {
        if (n <= 0) cout << endl;
        else {
            vector<int> v(n);
            readVector(v);
            sort(v.begin(), v.end());
            cout << v[n-1];
            for (int i = n-2; i >= 0; i--) cout << " " << v[i];
            cout << endl;
        }
    }
}