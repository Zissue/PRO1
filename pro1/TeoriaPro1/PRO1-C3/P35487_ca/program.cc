#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Info {
	string nom, hora;
};

string busca_rec(string nom, const vector<Info>& v, int esq, int dre) {
	if (esq > dre) return "ABANDONA";
	int mig = (esq + dre)/2;
	if (nom > v[mig].nom) return busca_rec(nom, v, mig + 1, dre);
	if (nom < v[mig].nom) return busca_rec(nom, v, esq, mig - 1);
	if ((mig > 0 and v[mig - 1].nom == nom) or (mig < v.size() - 1 and v[mig + 1].nom == nom)) return "???";
	return v[mig].hora;
}

string busca(string nom, const vector<Info>& v) {
	return busca_rec(nom, v, 0, v.size() - 1);
}

int main() {
	int n;
	cin >> n;
	vector<Info> v(n);
	for (int i = 0; i < n; ++i) cin >> v[i].nom >> v[i].hora;
	string dni, nom;
	while (cin >> dni >> nom) cout << dni << ' ' << busca(nom, v) << endl;
}