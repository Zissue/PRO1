#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void readVector(vector<int>& a) {
    for (int i = 0; i < a.size(); i++) {
        cin >> a[i];
    }
}

int main () {
    int n;
    while (cin >> n) {
        vector<int> v(n);
        readVector(v);
        sort(v.begin(), v.end());
        
        int count = 1;
        int aux = v[0];

        for (int i = 1; i < n; i++) {
            if (v[i] != aux)  {
                aux = v[i];
                count++;
            }
        }
        cout << count << endl;
    }
}