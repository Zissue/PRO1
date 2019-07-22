#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matriu;
typedef vector<int> fila;

Matriu producte(const Matriu& a, const Matriu& b) {
    Matriu r(a.size(), fila(b.size(),0) );
    
    for (int i = 0; i < r.size(); i++) 
        for (int j = 0; j < r.size(); j++) 
            for (int k = 0; k < r.size(); k++) r[i][j] += (a[i][k]*b[k][j]);
    return r;
}