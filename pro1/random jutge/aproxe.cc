#include <iostream>
using namespace std;

double factorial(int n) {
	if (n <= 1) return 1.0;
	else return n * factorial (n-1);
}

double aprox_e_taylor(int n) {
	double sum = 0.0;
	for (int i = 0; i < n; i++) {
		sum += 1/factorial(i);
	}
	return sum;
}

int main () {
	cout.setf (ios::fixed);
    cout.precision (10);

    int n;
    while (cin >> n) {
    	cout << "Amb " << n << " terme(s) s'obte ";
    	cout << aprox_e_taylor(n) << "." << endl;	
    }
}