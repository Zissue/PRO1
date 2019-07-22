#include <iostream>
using namespace std;

int main () {

    int n;
    cin >> n;

    int count=0;
    int xpar=0;
    int ximpar=0;

    for (int i=n ; i!=0 ; i=i/10) {
        count++;
    }

    for (int i=0 ; i<count ; i++) {

        if (i%2==0) {
            xpar=xpar+(n%10);
            n/=10;
        }
        
        if (i%2!=0) {
            ximpar=ximpar+(n%10);
            n/=10;
        }
    }

    cout << xpar << " " << ximpar << endl;

    if ((ximpar==0) or (xpar==0)) {
        cout << "0 = ";
        if (xpar>=ximpar) cout << ximpar << " * " << xpar << endl;
        if (ximpar>xpar) cout << xpar << " * " << ximpar << endl;
    }

    else if (ximpar>=xpar) {
        if ((ximpar%xpar)==0) {
            cout << ximpar << " = " << ximpar/xpar << " * " << xpar << endl;
        }
        else cout << "res" << endl;
    }

    else if (xpar>=ximpar) {
        if ((xpar%ximpar)==0) {
            cout << xpar << " = " << xpar/ximpar << " * " << ximpar << endl;
        }
        else cout << "res" << endl;
    }
}