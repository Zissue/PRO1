#include <iostream>
using namespace std;

int main () {

    int n;
    while (cin >> n) {

        for (int f=1; f<=n; f++) {
            for (int c=1; c<=n; c++) {
                if (f%2!=0 and c%2!=0) cout << ".";
                else if (f%2!=0 and c%2==0) cout << "x";
                if (f%2==0 and c%2!=0) cout << "x";
                else if (f%2==0 and c%2==0) cout << ".";
            }
            cout << endl;
        }
        cout << endl;
    }
}