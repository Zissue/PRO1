#include <iostream>
using namespace std;

int main () {

    int x;
    int p=0, n=0;
    while (cin >> x) {
        if (x>0) p=p+x;
        else n=n+x;
    }
    cout << "Sum Pos: " << p << endl;
    cout << "Sum Neg: " << n << endl;
}