#include<iostream>
using namespace std;
 
int main() {
    bool found = false;
    int a, b, c, d, x, y, z;
    while (cin >> a >> b >> c >> d) {
        if (a <= b and c <= d) {
            if ((a == 0 or c == 0) and not found) {
                found = true;
                z = a + c;
                x = a;
                y = c;
            }
        }
    }
    if (found) cout << x << "^3 + " << y << "^3 = " << z << "^3" << endl;
    else cout << "No solution!" << endl;
}