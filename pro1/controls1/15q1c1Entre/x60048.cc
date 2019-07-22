#include <iostream>
using namespace std;

int main () {
    
    string s1, s2;
    while (cin >> s1 >> s2) {
        if (s1<s2) cout << s1 << " " << s2 << endl;
        else cout << s2 << " " << s1 << endl;
    }
}