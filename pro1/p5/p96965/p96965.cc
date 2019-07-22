#include <iostream>
using namespace std;

int suma_cifras (int n) {
	if (n < 10) return n;
	else return suma_cifras(n/10) + n%10;
}

int reduccio_digits (int n) {
    //int r = n;
    while (n > 9) n = suma_cifras(n);
    return n;
}

int main () {
    int n;
    cin >> n ;
    cout << reduccio_digits(n) << endl;
}