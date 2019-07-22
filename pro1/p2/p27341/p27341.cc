#include <iostream>
using namespace std;

int main () {
    
    int a, b;

    while (cin >> a >> b) {
        double x = a;
        int r = 0;
        while (x<=b) {
            r = r + (x*x*x);
            x++;
        }
        cout << "suma dels cubs entre " << a << " i " << b << ":" << " " << r << endl;
    }
}
