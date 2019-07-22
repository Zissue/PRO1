#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    int x;
    while (cin >> x) {
        vector<int> v;
        while (x != 0) {
            v.push_back(x);
            cin >> x;
        }
        sort(v.begin(), v.end());
        int n = v.size();
        bool first = true;
        //Prints even numbers
        for (int i = 0; i < n; i++) {
            if (v[i]%2 == 0) {
                if (first) {
                    cout << v[i];
                    first = false;
                }
                else cout << " " << v[i];
            }
        }
        cout << endl;
        first = true;
        for (int i = n-1; i >= 0; i--) {
            if (v[i]%2 != 0) {
                if (first) {
                    cout << v[i];
                    first = false;
                }
                else cout << " " << v[i];
            }
        }
        cout << endl;
    }
}