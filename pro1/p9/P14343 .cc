#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Enviament {
    string dni;
    string exer;
    int temps;
    string res;
};

struct Alumne {
    string dni;
    int num;
};

struct Resultats {
    Alumne envVerd;
    Alumne exVerd;
    Alumne exVermell;
    Alumne exIntent;
    Alumne ultTemps;
};

typedef vector<Enviament> Historia;

void llegeix_env(Enviament& e) {
    cin >> e.dni >> e.exer >> e.temps >> e.res;
}

void llegeix_hist(Historia& a) {
    for (int i = 0; i < a.size(); i++) llegeix_env(a[i]);
}

bool ordena(const Enviament& a, const Enviament& b) {
    if (a.dni == b.dni) return a.exer < b.exer;
    return a.dni < b.dni;
}

void calcula_resultats(const Historia& v, Resultats& r) {
    r.envVerd.num = r.exVerd.num = r.exVermell.num = r.exIntent.num = r.ultTemps.num = 0;
    for (int i = 0; i < v.size(); i++) {
        string alum = v[i].dni;
        int auxEnv, auxVerd, auxVerm, auxInt, auxTemp;
        auxEnv = auxVerd = auxVerm = auxInt = auxTemp = 0;

        

    }
}

int main () {
    int n;
    cin >> n;
    Historia v(n);
        


}