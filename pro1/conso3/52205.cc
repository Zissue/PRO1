#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*void fusiona(vector<double>& v, int e, int m, int d) {
    int n = d - e + 1;
    vector<double> aux(n);
    int i = e;
    int j = m + 1;
    int k = 0;
    // Inv: aux[0..k-1] es la fusio de v[e..i-1] i v[m+1..j-1]
    while (i <= m and j <= d) {
        if (v[i] <= v[j]) {
            aux[k] = v[i];
            ++i;
        }
        else {
            aux[k] = v[j];
            ++j;
        }
        ++k;
    }
    while (i <= m) {
        aux[k] = v[i];
        ++k;
        ++i;
    }
    while (j <= d) {
        aux[k] = v[j];
        ++k;
        ++j;
    }
    for (k = 0; k < n; ++k) v[k + e] = aux[k];
}*/

void ordena_per_fusio(vector<double>& v) {
    sort(v.begin(), v.end());
}