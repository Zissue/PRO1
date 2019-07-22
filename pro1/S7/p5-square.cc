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
//post: retorna el vector v*v (componente a componente)
//
//comentario:tal como se ha implementado, v no puede pasarse por 
//           referencia constante
vector<int> square(vector<int> v) {
    int n = v.size();
    for (int i = 0; i < n; ++i)
        v[i] = v[i]*v[i];
    return v;
}
  

//escribimos un main con el unico proposito para probar la funcion square
int main() {
    int n; 
    cin >> n;
    vector<int> v;
    leer_vector(v);
    vector<int> sqr = square(v);
    escribir_vector(sqr);
    escribir_vector(v);
}
