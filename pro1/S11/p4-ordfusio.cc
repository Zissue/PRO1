#include <iostream>
#include <vector>
using namespace std;



//pre: n > 0
//post: retorna un vector de tamanno n leido de la entrada
vector<double> lee_vector(int n) {
    vector<double> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    return v;
}


//pre:---
//post: valores del vector escritos en output
void escribir_vector(const vector<double>& v) {
    int n = v.size();
    cout << v[0];
    for (int i = 1; i < n; ++i)
    cout << ' ' << v[i];
    cout << endl;
}



// Pre: 0<=e<=m<=d<v.size() i v[e..m] i v[m+1..d], per separat, son ordenats creixentment
// Post: els elements de v[e..d] son els inicials, pero ordenats creixentment
//       i la resta de v no ha canviat
void fusiona(vector<double>& v, int e, int m, int d) {
    int n = d - e + 1;
    vector<double> aux(n);
    int i = e;
    int j = m + 1;
    int k = 0;
    // Inv: aux[0..k-1] es la fusio de v[e..i-1] i v[m+1..j-1]
    while (i <= m and j <= d) {
        if (v[i] <= v[j]) {
            aux[k] = v[i];
            ++i;
        }
        else {
            aux[k] = v[j];
            ++j;
        }
        ++k;
    }
    while (i <= m) {
        aux[k] = v[i];
        ++k;
        ++i;
    }
    while (j <= d) {
        aux[k] = v[j];
        ++k;
        ++j;
    }
    for (k = 0; k < n; ++k) v[k + e] = aux[k];
}

// Pre: 0<=e<=d<v.size()
// Post: els elements de v[e..d] son els inicials, pero ordenats creixentment
void ordena_per_fusio(vector<double>& v, int e, int d) {
    if (e < d) {
        int m = (e + d)/2;
        ordena_per_fusio(v, e, m);
        ordena_per_fusio(v, m + 1, d);
        fusiona(v, e, m, d);
    }
}


int main() {
   int n;
   cin >> n;
   vector<double> v = lee_vector(n);
   ordena_per_fusio(v,0,v.size()-1);
   escribir_vector(v);
}

