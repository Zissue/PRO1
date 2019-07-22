#include <iostream>
#include <vector>
using namespace std;

double producte_escalar(const vector<double>& u, const vector<double>& v) {
    int size = v.size();
    double r = 0;
    for (int i = 0; i < size; i++) {
        r = r + v[i] * u[i];
    }
    return r;
}