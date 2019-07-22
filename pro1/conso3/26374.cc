#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matriu;

Matriu suma(const Matriu& a, const Matriu& b) {
    int n = a.size();
    Matriu r = a;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            r[i][j] += b[i][j];
        }
    }
    return r;
}