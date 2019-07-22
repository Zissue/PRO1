#include <iostream>
#include <vector>
using namespace std;

// Pre: 0<=e<=m<=d<v.size() i v[e..m] i v[m+1..d], per separat, son ordenats creixentment
// Post: els elements de v[e..d] son els inicials, pero ordenats creixentment
//       i la resta de v no ha canviat
void merge(vector<double>& v, int e, int m, int d) {
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
}

// Pre: 0<=e<=d<v.size()
// Post: els elements de v[e..d] son els inicials, pero ordenats creixentment
void merge_sort(vector<double>& v, int e, int d) {
    if (e < d) {
        int m = (e + d)/2;
        merge_sort(v, e, m);
        merge_sort(v, m + 1, d);
        merge(v, e, m, d);
    }
}

void ordena_per_fusio(vector<double>& v) {
	merge_sort(v,0,v.size()-1);
}

int main() {
   int n;
   cin >> n;
   vector<double> v(n);
   for (int i = 0; i < n; ++i) cin >> v[i];
   ordena_per_fusio(v);
   for (int i = 0; i < n; ++i) cout << v[i] << " "; 
   cout << endl;
}