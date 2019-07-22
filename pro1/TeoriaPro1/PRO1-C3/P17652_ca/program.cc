#include <iostream>
#include <vector>
using namespace std;

struct Persona {
	string nom;
	bool dona;
	int edat;
};

int main() {
	int n;
	cin >> n;
	vector<Persona> v(n);
	int edat_home_mes_vell = 0;
	for (int i = 0; i < n; ++i) {
		cin >> v[i].nom;
		string s;
		cin >> s;
		v[i].dona = (s == "dona");
		cin >> v[i].edat;
		if (not v[i].dona and v[i].edat > edat_home_mes_vell) edat_home_mes_vell = v[i].edat;
	}
	for (int i = 0; i < n; ++i) {
        if (v[i].dona and v[i].edat < edat_home_mes_vell) cout << v[i].nom << ' ' << v[i].edat << endl;
    }
}