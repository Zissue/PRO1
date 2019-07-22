#include <iostream>
using namespace std;

string dia_de_la_setmana (int d, int m, int a) {
    
    int f;
    int mm = 0, aa = 0;
    
    m = m-2;

    if (m <= 0) {
        mm = m + 12;
        aa = a - 1;
    }
    
    int c = (aa/100);
    int y = aa%100;
    
    f = ((2.6*mm) - 0.2);
    f = f + d + y - (2*c);
    y = (y/4);
    c = (c/4);
    f = f + c + y;

    while (f < 0) f = f + 7;
    f = f%7;
      
    if (f == 0) return "diumenge";
    else if (f == 1) return "dilluns";
    else if (f == 2) return "dimarts";
    else if (f == 3) return "dimecres";
    else if (f == 4) return "dijous";
    else if (f == 5) return "divendres";
    else return "dissabte";
}

int main () {

    int d, m, a;
    cin >> d >> m >> a;

    cout << dia_de_la_setmana(d, m, a) << endl;
}