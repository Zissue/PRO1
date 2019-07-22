#include <iostream>
#include <vector>
using namespace std;

struct Persona {
    string nom;
    bool dona;
    int edat;
};

void readPersona(Persona& a) {
    string sexe;
    cin >> a.nom >> sexe >> a.edat;
    if (sexe == "dona") a.dona = true;
    else a.dona = false;
}

void readVector(vector<Persona>& v, int& edat) {
    for (int i = 0; i < v.size(); i++) {
        readPersona(v[i]);
        if (!v[i].dona and v[i].edat > edat) edat = v[i].edat; 
    }
}

int main () {
    int n;
    cin >> n;
    vector<Persona> v(n);
    int edatvell = -1;

    readVector(v,edatvell);

    for (int i = 0; i < n; i++) {
        if (v[i].dona and v[i].edat < edatvell) 
            cout << v[i].nom << " " << v[i].edat << endl;
    }
}