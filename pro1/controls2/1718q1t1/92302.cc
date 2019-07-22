#include <iostream>
#include <vector>
using namespace std;

void LlegirParaules (vector<string>& cas, string& paraula) {
    while (paraula != "FI") {
        cas.push_back(paraula);
        cin >> paraula;
    }
}

int VocalCount(string word) {
	int c = 0;
	for (int i = 0; i < word.size(); ++i) {
		if (word[i] == 'A' or
		    word[i] == 'E' or
		    word[i] == 'I' or
		    word[i] == 'O' or
		    word[i] == 'U') 
            c++;
	}
	return c;
}


int main () {
    int count = 0;
    string paraula, uparaula;
    while (cin >> paraula) {
        count = 0;
        bool found = false;
        vector<string> frase;
        LlegirParaules(frase, paraula);
        if (frase.size() == 0) cout << "-" << endl;
        else {
            uparaula = frase[frase.size()-1];
            for (int i = 0; i < frase.size()-1 and !found; i++) {
                if (VocalCount(frase[i]) == VocalCount(uparaula)) {
                    count++;
                    cout << frase[i] << ", " << i << endl;
                    found = true;
                }
            }
        }
        if (!found and frase.size() != 0) cout << "-" << endl;
    }
}