#include <iostream>
using namespace std;

int main () {

    int x, y, z;
    cin >> x >> y >> z;

    int a, b, c;

    if (x>y and x>z) {
        c=x;
        if (y>z) {
            b=y;
            a=z;
        }
        else {
            b=z;
            a=y;
        }
        
    }

    if (y>x and y>z) {
        c=y;
        if (x>z) {
            b=x;
            a=z;
        }
        else {
            b=z;
            a=x;
        }
    }

    if (z>x and z>y) {
        c=z;
        if (x>y) {
            b=x;
            a=y;
        }
        else {
            b=y;
            a=x;
        }
    }
    
    string orden;
    cin >> orden;

    if (orden=="ABC") cout << a << " " << b << " " << c << endl;
    if (orden=="BCA") cout << b << " " << c << " " << a << endl;
    if (orden=="CBA") cout << c << " " << b << " " << a << endl;
    if (orden=="ACB") cout << a << " " << c << " " << b << endl;
    if (orden=="BAC") cout << b << " " << a << " " << c << endl;
    if (orden=="CAB") cout << c << " " << a << " " << b << endl;
}