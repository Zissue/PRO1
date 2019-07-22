#include <iostream>
using namespace std;

int main () {

    int f, c;
    cin >> f >> c;
    int inc=0;

    for (int filas = 0; filas < f ; filas++) {
        inc=filas;
        for (int columnas = 0; columnas < c ; columnas++) {
            cout << inc;
            inc++;
            if (inc>9 or columnas+1==filas) inc=0;
        }
        cout << endl;
    }
}