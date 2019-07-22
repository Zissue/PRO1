#include <iostream>
using namespace std;

int main () {

    char c;
    cin >> c;

    if ((c>='A' and c<='Z') or (c>='a' and c<='z') or (c>='0' and c<='9')) {
        if ((c>='A' and c<='Z') or (c>='a' and c<='z')) {
            cout << "lletra" << endl;
        }
        if (c>='0' and c<='9') {
            cout << "digit" << endl;
        }
    }
    else cout << "res" << endl;
}