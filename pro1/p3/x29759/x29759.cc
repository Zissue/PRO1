#include <iostream>
using namespace std;

int main () {
        int n;
        char x;
        cin >> n;
        int par=0;
        int impar=0;

        for (int f=n; f!=0; --f) {

            for (int c=n; c!=0; --c) {
                cin >> x;
                if (f%2==0 and c%2==0) {
                par=par+(x -'0');
                }
                else impar=impar+(x -'0');
                }
        }
        cout << impar << "-" << par << " = " << impar-par << endl;
}
