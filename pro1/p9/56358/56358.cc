#include <iostream>
using namespace std;

struct Temps {
    int hora, minut, segons;
};

void un_segon (const Temps& t, Temps& t1, Temps& t2) {
    t1 = t2 = t;

    t1.segons++;
    if (t1.segons == 60) {
        t1.segons = 0;
        t1.minut++;
        if (t1.minut == 60) {
            t1.minut = 0;
            t1.hora++;
            if (t1.hora == 24) t1.hora = 0;
        }
    }

    t2.segons--;
    if (t2.segons < 0) {
        t2.segons = 59;
        t2.minut--;
        if (t2.minut < 0) {
            t2.minut = 59;
            t2.hora--;
            if (t2.hora < 0) t2.hora = 23;
        }
    }

}

int main () {
    Temps t, t1, t2;
    while (cin >> t.hora >> t.minut >> t.segons) {
        un_segon(t, t1, t2);
        cout << t1.hora << " " << t1.minut << " " << t1.segons << endl;
        cout << t2.hora << " " << t2.minut << " " << t2.segons << endl;
    }
}