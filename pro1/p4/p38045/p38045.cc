#include <iostream>
#include <cmath>
using namespace std;


int quadrat (int x) {
    return x*x;
}

double arrel (int x) {
    cout.setf(ios::fixed);
    cout.precision(6);
    return sqrt(x);
}

int main () {
    int x;
    while (cin >> x) {
        cout << quadrat(x) << " " << arrel(x) << endl;
    }
}