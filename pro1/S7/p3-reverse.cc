#include <iostream>
#include <vector>
using namespace std;


//pre: ---
//post: escribe en salida los valores del vector s separados por un ' '
void escribir_vector(const vector<int>& s) {
    cout << s[0];
    int n = s.size();
    for (int i = 1; i < n; ++i)
        cout << ' ' <<  s[i];
    cout << endl;
}



//pre: ---
//post: lee del canal de entrada el vector v 
void leer_vector(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n; ++i) cin >> v[i];
}


//pre: x = X, y = Y.  X, Y denotan valores iniciales
//post: x = Y, y = X
void swap(int& x, int& y) {
    int z = x;
    x = y;
    y = z;
}

//pre:--
//post: v en salida es el reverso de v en entrada
void reverse(vector<int>& v) {
    int iz = 0;
    int de = v.size() - 1;
    while (iz  < de) {
        swap(v[iz],v[de]);
        ++iz;
        --de;
    }
}

void escribir_al_reves(const vector<int>& v) {
    int n = v.size();
    cout << v[n - 1];
    for (int j = n - 2; j >= 0; --j) cout << ' ' << v[j];
    cout << endl;
}



//pre: en canal de entrada un numero n > 0 seguido de secuencia de n numeros
//post: en output la secuencia de n numeros invertida
//
//Se puede resolver sin usar vectores con un codigo recursivo
//
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    leer_vector(v);
    //solucion alternativa
    escribir_al_reves(v);
    reverse(v);
    escribir_vector(v);
}
