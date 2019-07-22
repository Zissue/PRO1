#include <iostream>
#include <cmath>
using namespace std;

int main () {

    cout.setf(ios::fixed);
    cout.precision(4);

    double x;
    cin >> x;

    double c, r=0;
    for (int i=0; cin >> c; i++){
        r=r+c*pow(x,i);
    }
    cout << r << endl;
}