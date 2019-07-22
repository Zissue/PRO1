#include <iostream>
#include <cmath>
using namespace std;


int main () {
    cout.setf(ios::fixed); 
    cout.precision(4);

    double x, n, r;
    cin >> x;

    for (int i=0 ; cin >> n ; i++) {
        r=r+n*pow(x,i);
    }

    cout << r << endl;
}