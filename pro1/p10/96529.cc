#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int b=0, p=0;
    string s;
    while (cin >> s){
        b = p = 0;
        for (int i=0; i<s.length(); ++i){
            if (s[i] == '[') ++b;
            else if (s[i] == ']') --b;
            else if (s[i] == '(') ++p;
            else if (s[i] == ')') --p;
        }
        if (b or p) cout << "no" << endl;
        else cout << "yes" << endl;
    }
}

/*int main () {
    string s;
    while (cin >> s) {
        int c1 = 0, c0 = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '[' or s[i] == '(') c1++;
            else c0++;
        }
        if (c1 == c0) cout << "si";
        else cout << "no";
        cout << endl;
    }
}/*

/*int main () {       //vector<char> v(s.size());
    string s;
    while (cin >> s) {
        vector<char> v(s.size());
        bool cor = true, par = true;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '[') cor = false;
            if (s[i] == '(') par = false;
            if (s[i] == ']' and !cor) cor = true;
            if (s[i] == ')' and !par) par = true;
        }
    }
}*/