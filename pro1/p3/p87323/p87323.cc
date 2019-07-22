#include <iostream>
using namespace std;

int main () {

    int f, c;
    cin >> f >> c;
    int inc=0;

    for (int filas = 0; filas < f ; filas++) {
        for (int columnas = 0; columnas < c ; columnas++) {
            if (columnas<=inc) {
                cout << (inc-columnas)%10;
            }
            else {
                cout << (columnas-inc)%10;
            }
        }
        inc++;
        cout << endl;
    }
}