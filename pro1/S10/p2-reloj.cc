#include <iostream>
using namespace std;

//tipo para representar un reloj
struct Reloj {
    int horas; //0 <= horas < 24
    int minutos; //0 <= minutos < 60
    int segundos; // 0 <= segundos < 60
};


//pre: cierto
//post: retorna un reloj que incrementa un segundo a r
Reloj increment(Reloj r) {
    ++r.segundos;
    if (r.segundos == 60) {
        r.segundos = 0;
        ++r.minutos;
    }
    if (r.minutos == 60) {
        r.minutos = 0;
        ++r.horas;
    }
    if (r.horas == 24) r.horas = 0;
    return r;
}



int main() {
    Reloj r;
    cin >> r.horas >> r.minutos >> r.segundos;
    Reloj s = increment(r);
    cout << r.horas << ' ' << r.minutos << ' ' << r.segundos << endl;
    cout << s.horas << ' ' << s.minutos << ' ' << s.segundos << endl;
}




        