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

// Pre: cap
// Post: els valors d'a i b estan intercanviats respecte als inicials
void swap(double& a, double& b) {
    double c = a;
    a = b;
    b = c;
}

// Pre: 0 <= i < v.size()
// Post: retorna pos tal que 0<= pos <=  i y  v[pos] es maxim en v[0..i]
int posicio_maxim(const vector<double>& v, int i) {
    int pos = 0;
    // Inv: 0 <= pos < s, i v[pos] >= v[j] per a tot j en [0..s-1]
    for (int s = 1; s <= i; ++s) {
        if (v[s] > v[pos]) pos = s;
    }
    return pos;
}

// Pre: 0 <= k < v.size()
// Post: v[0..k] conte els elements inicials, pero ordenats 
//       creixentment i la resta de v no ha estat modificada
// Versio iterativa
void ordena_per_seleccio(vector<double>& v, int k) {
    // Inv: v[i+1..k] esta ordenat i els elements de v[i+1..k] 
    // son tots mes grans que els de v[0..i]
    for (int i = k; i > 0; --i) {
        int j = posicio_maxim(v, i);
        swap(v[i], v[j]);
    }
}

int main() {
   int n;
   cin >> n;
   vector<double> v = lee_vector(n);
   ordena_per_seleccio(v, n - 1);
   escribir_vector(v);
}
