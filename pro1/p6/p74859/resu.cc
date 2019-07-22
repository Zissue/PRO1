#include <iostream>
using namespace std;
 
int main() {
    int i;
    while (cin >> i) {
        bool found = false;
        int x,k ;
        k = 0;
        cin >> x;
        while(not found and x != -1) {
            ++k;
            if(k == i) found = true;
            else cin >> x;
        }
        if(found) cout << "A la posicio " << k << " hi ha un " << x << "." << endl;
        else cout << "Posicio incorrecta." << endl;
        while(x != -1) cin >> x;
    }
}