#include <iostream>
using namespace std;

bool es_primer (int n) {
    if (n <= 1) return false;
        for (int i = 2; i*i <= n; ++i) {
            if (n%i == 0) return false;
        }
    return true;
}

int suma_cifras (int n) {
    int suma = 0;
	while(n > 0) {
		suma += (n%10);
		n /= 10;
	}
	return suma;
}

bool es_primer_perfecte (int n) {
    
    if (!es_primer(n)) return false;
    if (n < 10) return true;
    int m = suma_cifras(n);
    return es_primer_perfecte(m);
    
}

int main () {
    int n;
    cin >> n;
    
    cout << es_primer_perfecte(n) << endl;
}
