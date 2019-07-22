#include <iostream>
using namespace std;

int main () {

    int a, b;
    char c;
    while (cin >> a >> c >> b) {

        if (c=='<') {
            if (a<b) cout << "true" << endl;
            else cout << "false" << endl;
        }
        if (c=='>') {
            if (a>b) cout << "true" << endl;
            else cout << "false" << endl;
        }
    }
}