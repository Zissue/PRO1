#include <iostream>
#include <vector>
using namespace std;

void garbell(int n, vector<bool>& v) {
    v[0] = false;     v[1] = false;
    for (int i = 2; i*i <= n; ++i) 
        if (v[i] == true) 
            for (int p = i*2; p <= n; p += i) v[p] = false;
}

int main () {
    int n;
    vector<bool> v(1000001, true);
    garbell(1000000,v);
    while (cin >> n) {
        if (v[n]) cout << n << " is prime" << endl;
        else cout << n << " is not prime" << endl;
    }
}