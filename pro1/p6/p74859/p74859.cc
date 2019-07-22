#include <iostream>
using namespace std;

int main() {
    int i, x;
    while (cin >> i) {
        bool trobat = false;
        int count = 0;
        x = 0;
        while (!trobat and i != 0 and x != -1) {
            cin >> x;
            count++;
            if (i == count) {
                trobat = true;
            }   
        }
        if (trobat and x != -1) cout << "A la posicio " << i << " hi ha un " << x << '.' << endl;
        else if (!trobat or x != -1) cout << "Posicio incorrecta." << endl;
        while (x != -1) cin >> x;
    }
}