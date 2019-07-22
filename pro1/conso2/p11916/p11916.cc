#include <iostream>
using namespace std;

int factorial(int n) {
  if (n < 2) return 1;
  else return (n*factorial(n-1));
}

int main() {
    cout.setf (ios::fixed);
    cout.precision (10);
    int x;
    while (cin >> x) {
        double res = 0;
        for (int i = 0; i < x; ++i)
            res = res + (1.0/factorial(i));
        cout << "Amb " << x << " terme(s) s'obte " << res << "." << endl;
    }
}

/*double e(int x) {
    int r = 0;
    if (x == 0) r = 0;
    else for (int i = 0; i < x; i++) {
        r = r + (1.0/factorial(i));
    }
    return r;
}

int main () {
    cout.setf (ios::fixed);
    cout.precision (10);

    double n;
    cin >> n;
    cout << e(n) << endl;
}*/