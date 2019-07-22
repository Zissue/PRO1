#include <iostream>
using namespace std;

int sdi (int n) {
    if (n == 0) return 0;
    else {
        if (n%10%2 != 0) return n%10 + sdi(n/10);
        else return sdi(n/10);
    }
}

int main () {
    int n;
    while (cin >> n) {
        cout << "The sum of odd digits of " << n << " is " << sdi(n) << "." << endl;
    }
}