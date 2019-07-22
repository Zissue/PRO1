#include <iostream>
using namespace std;

int main () {
    bool p=true;
    int f, c;
    while (cin >> f >> c) {
        if (p==false) cout << endl;
        int x=9;
        for (int countf = 0 ; countf < f; countf++) {
            for (int countc = 0; countc<c; countc++) {
            cout << x;
            x--;
            if (x<0) x=9;
            
            }
        cout << endl;
        }
    p=false;
    }
}
