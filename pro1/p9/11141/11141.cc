#include <iostream>
#include <vector>
using namespace std;

struct Estudiant {
    int dni;
    string nom;
    double nota;   // La nota és un valor entre 0 i 10, o -1 que representa NP
    bool repetidor;
};

void informacio (const vector<Estudiant>& es, double& min, double& max, double& mitj) {
    min = 10;
    mitj = max = 0;
    int count = 0;
    for (int i = 0; i < es.size(); i++) {
        if (!es[i].repetidor and es[i].nota != -1) {
            if (es[i].nota < min) min = es[i].nota;
            if (es[i].nota > max) max = es[i].nota;
            mitj += es[i].nota;
            count++;
        }
    }
    mitj = mitj/count;
    if (count == 0) mitj = min = max = -1;
}