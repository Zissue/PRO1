#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matriu;

Matriu producte(const Matriu& a, const Matriu& b) {
    Matriu c(a.size(), vector<int> (b[0].size()));
    
    for (int i = 0; i < a.size(); ++i)
        for (int j = 0; j < b[0].size(); ++j)
            for (int k = 0; k < a[0].size(); ++k) c[i][j] += a[i][k]*b[k][j];
    return c;
}