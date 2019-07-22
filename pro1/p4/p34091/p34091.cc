#include <iostream>
using namespace std;

bool es_perfecte(int n) {
    if (n == 0 or n == 1) return false;
    else {
        int count = 1;
        for (int i = 2; i*i <= n; i++) {
            if (n%i == 0) count = count + i + n/i;
        }

        if (count == n) return true;
        else return false;
    }
}

int main () {
    int n;
    cin >> n;
    cout << es_perfecte(n) << endl;
}