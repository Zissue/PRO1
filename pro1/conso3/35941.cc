#include <iostream>
#include <vector>
#include <string>
using namespace std;

void readText(vector<string>& a) {
    for (int i = 0; i < a.size(); i++) {
        cin >> a[i];
    }
}

int main () {
    string s;
    int n;
    while (cin >> s >> n) {
        vector<string> text(n);
        readText(text);
        int aux;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < text[i].size(); j++) {
                bool found = false;
                for (int k = 0; k < 26 and !found; k++) {
                    if (s[k] == text[i][j]) {
                        found = true;
                        aux = k;
                    }
                }
                if (text[i][j] == '_') cout << " ";
                else cout << char(aux + 'a');
            }
            cout << endl;
        }
        cout << endl;
    }
}