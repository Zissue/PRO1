#include <iostream>
#include <vector>
using namespace std;

struct Persona {
	string nom;
	int edat;
};

void ordena_per_insercio(vector<Persona>& v) {
    for (int i = 1; i < v.size(); ++i) {
        Persona x = v[i];
        int j = i;
        while (j > 0 and v[j - 1].edat < x.edat) {
            v[j] = v[j - 1];
            --j;
        }
        while (j > 0 and v[j - 1].edat == x.edat and v[j - 1].nom > x.nom) {
        	v[j] = v[j - 1];
        	--j;
        }
        v[j] = x;
    }
}

int main() {
   int n;
   cin >> n;
   vector<Persona> v(n);
   for (int i = 0; i < n; ++i) cin >> v[i].nom >> v[i].edat;
   ordena_per_insercio(v);
   for (int i = 0; i < n; ++i) cout << v[i].nom << ' ' << v[i].edat << endl;
}