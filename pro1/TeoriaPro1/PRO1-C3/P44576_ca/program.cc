#include <iostream>
#include <vector>
using namespace std;

struct Alumne {
    int dni;
    string nom;
};
 
struct Nota {
    int dni;
    string ass;
    string fac;
    double nota;
};
 
void llegeix_alumnes(vector<Alumne>& alumnes) {
	int m;
	cin >> m;
	alumnes = vector<Alumne>(m);
    for (int i = 0; i < m; ++i) cin >> alumnes[i].dni >> alumnes[i].nom;
}
 
void llegeix_notes(vector<Nota>& notes) {
    int n;
    cin >> n;
    notes = vector<Nota>(n);
    for (int i = 0; i < n; ++i) cin >> notes[i].dni >> notes[i].ass >> notes[i].fac >> notes[i].nota;
}

void escriu_info(const vector<Alumne>& alumnes, const vector<Nota>& notes) {
	int i = 0;
	int j = 0;
	while (i < alumnes.size() and j < notes.size()) {
		if (alumnes[i].dni < notes[j].dni) ++i;
		else if (alumnes[i].dni > notes[j].dni) ++j;
		else {
			cout << alumnes[i].dni << " " << alumnes[i].nom << endl;
			double suma = 0;
			int c = 0;
			while (j < notes.size() and alumnes[i].dni == notes[j].dni) {
				suma += notes[j].nota;
				++c;
				cout << "     " << notes[j].ass << ' '<< notes[j].fac << ' ' << notes[j].nota << endl;
				++j;
			}
			cout << "     mitjana: " << suma/c << endl << endl;
		}
	}
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);
	vector<Alumne> alumnes;
	vector<Nota> notes;
	llegeix_alumnes(alumnes);
	llegeix_notes(notes);
	escriu_info(alumnes, notes);
}