#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Nen{
    string nom;
    string joguina;
};

void readNen(Nen& a) {
    cin >> a.nom >> a.joguina;
}

void readVector(vector<Nen>& v) {
    int n = v.size();
    for (int i = 0; i < n; i++) {
        readNen(v[i]);
    }
}

bool ordena(const Nen& a, const Nen& b) {
    if (a.nom == b.nom) return a.joguina < b.joguina;
    return a.nom < b.nom;
}

int main () {
    int n;
    cin >> n;
    vector<Nen> v(n);
    readVector(v);
    sort(v.begin(), v.end(), ordena);
    int count = 1;
    string auxNom = v[0].nom, auxJog = v[0].joguina;
    for (int i = 1; i < n; i++) {
        if (v[i].nom == auxNom) {
            if (v[i].joguina == auxJog) count++;
            else {
                cout << auxNom << " " << auxJog 
                << " " << count << endl;
                auxNom = v[i].nom;       auxJog = v[i].joguina;
                count = 1;
            }
        }
        else {
            cout << auxNom << " " << auxJog 
            << " " << count << endl;
            auxNom = v[i].nom;       auxJog = v[i].joguina;
            count = 1;
        }
    }
    cout << auxNom << " " << auxJog << " " << count << endl;
}

//Zixu PRO