#include <iostream>
#include <vector>
using namespace std;

bool quadrat_magic(const vector< vector<int> >& t) {
    int n = t.size();
    int suma = 0;
    for (int i = 0; i < n; i++) {
        if (t[0][i] > n*n or t[0][i] <= 0) return false;
        suma += t[0][i];
    }
    int aux = 0;
    //Per files
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (t[i][j] > n*n or t[i][j] <= 0) return false;
            aux += t[i][j];
        }
        if (suma != aux) return false;
        aux = 0;
    }
    //Per columnes
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            aux += t[j][i];
        }
        if (suma != aux) return false;
        aux = 0;
    }
    //Diagonal e-d decreixent
    for (int i = 0; i < n; ++i) {
        aux += t[i][i];
    }
    if (aux != suma) return false;
    aux = 0;
    int i = 0;
    //Diagonal d-e decreixent
    for (int j = n-1; j >= 0; j--) {
        aux += t[i][j];
        i++;
    }
    if (suma != aux) return false;
    return true;
}