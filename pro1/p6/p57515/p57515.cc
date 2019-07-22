#include <iostream>
#include <cmath>
using namespace std;

int xifres(int x) {
    int count = 0;
    for (int i = x; i != 0; i /= 10) count++;
    return count;
}

int rotacio_dreta (int x, int k) {
    for (int i = 0; i < k; i++) {
        int ux = x%10;
        x = x/10 + ux * pow (10,xifres(x)-1);
    }
    return x;
}

int main () {
    int x, k;
    while (cin >> x >> k) {
        cout << rotacio_dreta(x,k);
        cout << endl;
    }
}