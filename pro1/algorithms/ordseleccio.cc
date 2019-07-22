#include <iostream>
#include <vector>
using namespace std;


// Pre: cap
// Post: els valors d'a i b estan intercanviats respecte als inicials
void intercanvia(double& a, double& b) {
    double c = a;
    a = b;
    b = c;
}

// Pre: 0 <= m < v.size()
// Post: retorna i tal que 0<=i<=m i v[i] es maxim en v[0..m]
int posicio_maxim(const vector<double>& v, int m) {
    int pos = 0;
    // Inv: 0 <= pos < i, i v[pos] >= v[j] per a tot j en [0..i-1]
    for (int i = 1; i <= m; ++i) {
        if (v[i] > v[pos]) pos = i;
    }
    return pos;
}


// Pre: 0 <= m < v.size()
// Post: v[0..m] conte els elements inicials, pero ordenats 
//       creixentment i la resta de v no ha estat modificada
// Versio recursiva
void ordena_per_seleccio(vector<double>& v, int m) {
    if (m > 0) {
        int k = posicio_maxim(v, m);
        intercanvia(v[k], v[m]);
        ordena_per_seleccio(v, m - 1);
    }
}


// Pre: 0 <= m < v.size()
// Post: v[0..m] conte els elements inicials, pero ordenats 
//       creixentment i la resta de v no ha estat modificada
// Versio iterativa
void ordena_per_seleccio_iter(vector<double>& v, int m) {
    // Inv: v[i+1..m] esta ordenat i els elements de v[i+1..m] 
    // son tots mes grans que els de v[0..i]
    for (int i = m; i > 0; --i) {
        int k = posicio_maxim(v, i);
        intercanvia(v[k], v[i]);
    }
}


int main() {
   int n;
   cin >> n;
   vector<double> v(n);

   for (int i = 0; i < n; ++i) cin >> v[i];
   ordena_per_seleccio(v,v.size()-1);
   for (int i = 0; i < n; ++i) cout << v[i] << " "; 
   cout << endl;

}
