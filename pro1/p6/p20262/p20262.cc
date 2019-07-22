#include <iostream>
using namespace std;
 
int main () {
 
    int secuencia;
    //Entrada de la cantidad de numeros de la secuencia
    while (cin >> secuencia) {
        int numeros;
        int suma_total = 0;
        int suma_max = 0;
        int suma_min = 0;
        //Bucle de sumas de la secuencia
        for(int i = 0; i < secuencia; ++i){
            cin >> numeros;
            suma_total += numeros;
            //Comprovacion de cada suma
            if(suma_total >= suma_max) suma_max = suma_total;
            else if(suma_total <= suma_min) suma_min = suma_total;
        }
        cout << suma_max << ' ' << suma_total-suma_min << endl;
    }
}