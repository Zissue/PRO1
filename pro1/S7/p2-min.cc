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


//pre:  --
//post: retorna el valor minimo en v
int min(const vector<int>& v) {
    int n = v.size();
    int m = v[0];
    for (int i = 1; i < n; ++i)
        if (v[i] < m) m = v[i];
    return m;
}
  

//escribimos un main con el unico proposito para probar la funcion min
//Recordad que no necesitamos vectores para calcular el minimo de una secuencia
//Aqui usamos vectores con el unico objetivo de ilustrar una ejecución de la funcion min 
int main() {
    int n; 
    cin >> n;
    vector<int> v(n);
    leer_vector(v);
    cout << min(v) << endl;
}
    
