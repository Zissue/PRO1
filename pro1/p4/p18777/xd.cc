#include <iostream>
 
using namespace std;
 
// PRE: tres variables de una fecha
// PREcondicio: parametro a entre 1800 y 9999
// POS: dia de la semana de la fecha dada
// Se hace uso de la congruencia de Zeller
string dia_de_la_setmana(int d, int m, int a) {
    m = m - 2;
    if (m <= 0) {
        m = m + 12;
        --a;
    }
    int c = a/100;
    int y = a%100;
    int f = (2.6*m - 0.2);
    f = f + d + y - 2*c;
    y = y/4;
    c = c/4;
    f = f + c + y;
    while (f < 0) f += 7;
    f = f%7;
    if (f == 0) return "diumenge";
    if (f == 1) return "dilluns";
    if (f == 2) return "dimarts";
    if (f == 3) return "dimecres";
    if (f == 4) return "dijous";
    if (f == 5) return "divendres";
    if (f == 6) return "dissabte";
    else return "0";
}
 
int main() {
    int d,m,a;
    cin >> d >> m >> a;
    cout << dia_de_la_setmana(d,m,a) << endl;
}