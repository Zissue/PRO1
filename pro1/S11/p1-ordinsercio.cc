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
// Post: v conte els elements inicials i esta ordenat creixentment
void ordena_per_insercio(vector<double>& v) {
    // Inv: v[0..i-1] esta ordenat creixentment
    for (int i = 1; i < v.size(); ++i) {
        double x = v[i];
        int j = i;
        while (j > 0 and v[j - 1] > x) {
            v[j] = v[j - 1];
            --j;
        }
        v[j] = x;
    }
}

int main() {
   int n;
   cin >> n;
   vector<double> v = lee_vector(n);
   ordena_per_insercio(v);
   escribir_vector(v);
}
