#include <iostream>
#include <vector>
using namespace std;


//pre:--
//post: cuando x esta en v retorna i tal que v[i] es x
//      cuando x no esta en v retorna -1
int search(const vector<int>& v, int x) {
    int n = v.size();
    for (int i = 0; i < n; ++i) 
        if (v[i] == x) return i;
    return  -1;
}




//busqueda en diccionario!
//pre: v es creciente y  iz, de son indices validos de v 
//post: cuando x esta en v[iz..de] retorna i tal que v[i] es x
//      cuando x no esta en v[iz..de] retorna -1
int binary_search(const vector<int>& v, int x, int iz, int de) {
    //propiedad estable (inv): el valor de "x esta en v[iz..de]"
    while (iz <= de) {
        int mit = (iz + de)/2;
        //el predicado iz <= mit <= de es cierto
        if (x > v[mit]) iz = mit + 1;
        else if (x < v[mit]) de = mit - 1;
        else return mit;
    }
    return -1;
}


//busqueda en diccionario! version recursiva
//pre: v es creciente y  iz, de son indices validos de v 
//post: cuando x esta en v[iz..de] retorna i tal que v[i] es x
//      cuando x no esta en v[iz..de] retorna -1
int rec_binary_search(const vector<int>& v, int x, int iz, int de) {
    if (iz > de) return -1;
    else {
        int mit = (iz + de)/2;
        //iz <= mit <= de
        if (x > v[mit]) return rec_binary_search(v, x, mit + 1, de); 
        else if (x < v[mit]) return rec_binary_search(v, x, iz, mit - 1);
        else return mit;
    }
}




int main() {
    const int SIZE = 500000000;
    vector<int> proba(SIZE);
    for (int i = 0; i < SIZE; ++i) proba[i] = 3*i; 
    cerr << "Empezamos búsquedas dicotómicas" << endl;
    cerr << "busqueda dicotomica :" << binary_search(proba, 8439349, 0, SIZE - 1) << endl;
    cerr << "busqueda dicotomica recursiva :" << rec_binary_search(proba, 8439348, 0, SIZE - 1) << endl;
    cerr << "Empezamos búsqueda secuencial" << endl;    
    cerr << "busqueda secuencial :" << search(proba, 8439349) << endl;
}


    
    
