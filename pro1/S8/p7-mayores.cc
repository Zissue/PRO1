#include<iostream> 
#include<vector>
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
//post: lee un vector del canal de entrada
void leer_vector(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n; ++i) cin >> v[i];
}



//pre: cierto
//post: retorna un vector con los valores de v  que son mayores o iguales a k
//////////////////////////////////////////////////////////////////////////////////////////
//// VERSION SIN push_back() //////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////
vector<int> filtra(const vector<int>& v, int k) {
    int n = v.size();
    vector<int> aux(n);
    int j = 0; // indice para aux
    for (int i = 0; i < n; ++i) { 
        if (v[i] >= k) {
            aux[j] = v[i];
            ++j;
        }
    }
    vector<int> result(j);
    for (int i = 0; i < j; ++i)
        result[i] = aux[i];
    return result;
}



//pre: cierto
//post: retorna un vector con los valores de v  que son mayores o iguales a k
//////////////////////////////////////////////////////////////////////////////////////////
//// VERSION CON push_back() //////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////
vector<int> p_filtra(const vector<int>& v, int k) {
    int n = v.size();
    vector<int> result;
    for (int i = 0; i < n; ++i) 
        if (v[i] >= k) result.push_back(v[i]);      
    return result;
}



//main puramente ilustrativo. El problema se puede resover sin usar vectores.
//pre: en entrada hay un numero umbral k, un numero n >= 1 seguido de una secuencia de n numeros
//post: en salida estan los numeros de la secuencia que son mayores o iguales  al umbral k
int main() {
    int k;
    cin >> k;
    int n;
    cin >> n;
    vector<int> datos(n);
    leer_vector(datos);
    vector<int> resultado1 = filtra(datos, k);
    vector<int> resultado2 = p_filtra(datos, k);
    escribir_vector(resultado1);
    escribir_vector(resultado2);
}
