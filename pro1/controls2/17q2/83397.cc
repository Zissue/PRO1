#include <iostream>
#include <vector>
using namespace std;

bool unimodal(vector<int> v) {
    int n1 = v[1], n2 = v[2], n3;
    for (int i = 3; i < v.size()-1; i++) {
        n3 = v[i];
        if (n1 < n2 and n2 > n3) return true;
        n1 = n2;
        n2 = n3;
    }
    return false;
}

int main () {
    int n;
    bool found = false;
    while (cin >> n) {
        vector<int> v(n);
        for (int i = 0; i < v.size(); i++) cin >> v[i];

        if (unimodal(v)) {
            cout << v[0];
            for (int i = 1; i < v.size(); i++) cout << " " << v[i];
            cout << endl;
            found = true;
        }
    }
    if (!found) cout << "none" << endl;
}