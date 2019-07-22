#include <iostream>
#include <string>
using namespace std;

int main () {

    cout.setf(ios::fixed);
    cout.precision(4);

    double n;
    string c;
    double te=0;
    double ratio;
    cin >> ratio;

    while (cin >> n >> c) {
        if (c=="USD") {
            n=n/1.093;
            te=te+n;
        }
        else if (c=="EUR") te=te+n;
    }
    cout << te << " " << te*ratio << endl;
}