#include <iostream>
using namespace std;

int main () {

    int x;
    int p=0, n=0, t=0;
    while (cin >> x) {
        t++;
        if (x>0 and x!=0) p++;
        if (x<0 and x!=0) n++;
    }
    cout << "Pos: " << p << endl;
    cout << "Neg: " << n << endl;
    cout << "Tot: " << t << endl;
}