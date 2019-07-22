#include <iostream>
using namespace std;

int main () {

    int n;
    bool prim=true;
    while (cin >> n) {
        if (!prim) cout << endl;
        for (int i=0; i<n-1; i++) {
            for (int j=0; j<i; j++) cout << " ";
            for (int j=0; j<(2*n-1)-2*i; j++) cout << "X";
            cout << endl;
        }

        for (int k=0; k<n-1; k++) cout << " ";
        cout << "X" << endl;

        for (int i=0; i<n-1; i++) {
            for (int j=n-2; j>i; j--) cout << " ";
            for (int j=0; j<3+(2*i); j++) cout << "X";
            cout << endl;
        }

        prim=false;
    }   
}