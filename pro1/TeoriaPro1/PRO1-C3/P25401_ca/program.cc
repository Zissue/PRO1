#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        vector <int> v(n);
        for (int i = 0; i < n; ++i) cin >> v[i];
        int diferents = 1; 
        if (v.size() > 1) {
            sort(v.begin(),v.end());    
            for (int i = 1; i < v.size(); ++i) if (v[i] != v[i-1]) ++diferents;
        }
        cout << diferents << endl; 
    }
}