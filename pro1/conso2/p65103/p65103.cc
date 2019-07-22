#include <iostream>
using namespace std;

int main () {
    int i, x, xi, count = 1;
    cin >> i;
    bool found = false;

    while (cin >> x and !found) {
        if (count == i) {
            xi= x;
            found = true;
        }
        count++;
    }
    if (!found) cout << "Posicio incorrecta." << endl;
    else cout << "A la posicio " << i << " hi ha un " << xi << "." << endl;
}