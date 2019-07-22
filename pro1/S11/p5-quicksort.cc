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


void swap(double& x, double& y) {
    double aux = x;
    x = y;
    y = aux;
}


//pre: e y d son indices validos de v y e < d y pivote es v[e]
//post: v[e..d] contiene los valores originales reordenados en dos partes
//v[e..mid] contiene los menores o iguales a pivote
//v[mid] es pivote
//v[mid + 1..d] los mayores
//y e <= mid <= d
void separa(vector<double>& v, int pivote, int e, int d, int& mid) {
    int ee = e;
    while (e < d) {
        while (e < d and v[e] <= pivote) ++e;
        while (e < d and v[d] > pivote) --d;
        if (e < d) swap(v[e], v[d]);
    }
    if (v[e] > pivote) mid = e - 1;
    else mid = e;  
    //mid es la  ultima posicion  con valor  <= que pivote
    swap(v[ee], v[mid]);
}
            


// Pre: 0<=e<=d<v.size()
// Post: els elements de v[e..d] son els inicials, pero ordenats creixentment
void quicksort(vector<double>& v, int e, int d) {
    if (e < d) {
        int mid;
        separa(v, v[e], e, d, mid);
        quicksort(v, e, mid - 1);
        quicksort(v, mid + 1, d);
    }
}


int main() {
   int n;
   cin >> n;
   vector<double> v = lee_vector(n);
   quicksort(v, 0, v.size()-1);
   escribir_vector(v);
}

