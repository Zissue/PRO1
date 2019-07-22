#include <iostream>
using namespace std;

int main () {

    cout.setf(ios::fixed);
    cout.precision(10);

    double n, m;
    while (cin >> n >> m) {
        double hn=0, hm=0;

        for (int i=1; i<=n; i++) {
            hn=hn+(1.0/i);
        }
        for (int i=1; i<=m; i++) {
            hm=hm+(1.0/i);
        }

        cout << hn-hm << endl;
    }
}