#include <iostream>
#include <vector>
using namespace std;

void ordena_per_seleccio(vector<double>& v, int m) {
    for (int i = 0; i <= m; i++) {
        int min = i;
        for (int j = i+1; j <= m; j++) if (v[j] < v[min]) min = j;
        if (min != i) swap(v[i],v[min]);
    }
}