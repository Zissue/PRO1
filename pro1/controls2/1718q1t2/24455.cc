#include <iostream>
#include <vector>
using namespace std;

void LlegirParaules(vector<string>& cas, string& paraula) {
   while (paraula != "FI") {
      cas.push_back(paraula);
      cin >> paraula;
   }
}

int conso(string s) {
    int count = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != 'A' and
        s[i] != 'E' and
        s[i] != 'I' and
        s[i] != 'O' and
        s[i] != 'U') count++;
    }
    return count;
}

int main () {
    string word;
    while (cin >> word) {
        vector<string> frase;
        LlegirParaules(frase, word);
        string rword = "";
        int pos = -1;

        if (frase.size() != 0) {
            for (int i = 0; i < frase.size()-1; i++) {
                if (conso(frase[i]) == conso(frase[frase.size()-1])) {
                    rword = frase[i];
                    pos = i;
                }
            }
            if (pos != -1) cout << rword << ", " << pos << endl;
            else cout << "-" << endl;
        }
        else cout << "-" << endl;
    }
}