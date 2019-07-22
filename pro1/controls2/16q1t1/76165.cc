#include <iostream>
using namespace std;

bool is_sawtooth() {
    int n1, n2, n3;
    bool saw = true;
    if (!(cin >> n1 >> n2)) saw = true;
    if (n1 < n2) saw = true;
    while (cin >> n3) {
        if (n1 < n2 and n2 > n3) saw = true;
        else saw = false;
        n1 = n2;
        n2 = n3;
    }
    return saw;
}

int main () {
    if (is_sawtooth()) cout << "yes";
    else cout << "no";
    cout << endl;
}