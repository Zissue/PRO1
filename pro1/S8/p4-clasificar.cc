#include <iostream>
#include <vector>
using namespace std;

void swap(int& x, int& y) {
    int z = x;
    x = y;
    y = z;
}

//pre:---
//post: valores del vector escritos en output
void escribir_vector(const vector<int>& v) {
    int n = v.size();
    cout << v[0];
    for (int i = 1; i < n; ++i)
	cout << ' ' << v[i];
    cout << endl;
}
    

//pre: --
//post: v conserva sus valores originales, posiblemente reordenados.
//      los valores de la parte izquierda de v son menores que x.
//      los valores de la parte derecha son superiores o iguales a x.
void clasificar(vector<int>& v, int x) {
    int n = v.size();
    int iz = 0;
    int de = v.size() - 1 ;
    while (iz < de) {
        while (iz < n and v[iz] < x) ++iz;
        while (de >= 0 and v[de] >= x) --de;
        if (iz < de)
            //en este caso es  iz < n y de >= 0 
            swap(v[iz],v[de]);
    }
}

int main() {
    int x = 3;
    vector<int> v(5);
    v[0] = 4; v[1] = 1; v[2] = 2; v[3] = 8; v[4] = 0;
    clasificar(v, x);
    escribir_vector(v);
}
