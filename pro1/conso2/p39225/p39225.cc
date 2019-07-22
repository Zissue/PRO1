#include <iostream>
using namespace std;

int main () {
    int i, x, count = 0;
    cin >> i;
    bool found = false;

    while (!found and x != -1) {
        cin >> x;
        count++;
        if (count == i) found = true;
    }
    cout << "A la posicio " << i << " hi ha un " << x << "." << endl;
}