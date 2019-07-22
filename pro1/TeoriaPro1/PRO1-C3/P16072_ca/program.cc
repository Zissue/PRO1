#include <iostream>
#include <vector>
using namespace std;

vector<double> interseccio(const vector<double>& v1, const vector<double>& v2) {
    int auxsize;
    if (v1.size() > v2.size()) auxsize = v2.size();
    else auxsize = v1.size();
    vector<double> aux(auxsize);
    int i, j, k;
    i = j = k = 0;
    while (i < v1.size() and j < v2.size()) {
        if (v1[i] > v2[j]) ++j;
        else if (v1[i] < v2[j]) ++i;
        else if (k == 0 or aux[k-1] != v1[i]) { aux[k] = v1[i]; ++i; ++j; ++k; }
        else { ++i; ++j; }
    }
    vector<double> v3(k);
    for (int i = 0; i < k; ++i) v3[i] = aux[i];
    return v3;
}