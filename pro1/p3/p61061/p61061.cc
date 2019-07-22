#include <iostream>
using namespace std;

int main () {

	int n;
	bool primero = true;
	while (cin >> n) {
		int r=1;
		int origi=n;
		int o=n;
		bool bucle;
		if (n>=10) bucle=true;
		else {
			bucle=false;
			cout << "El producte dels digits de " << n << " es " << n << "." << endl;
		}
		if (primero) primero=false;
		else cout << "----------" << endl;
		while (bucle) {
			while (o>=10) {
		
				while (o>0) {
					r=r*(o%10);
					o=o/10;
				}
			}
			cout << "El producte dels digits de " << origi << " es " << r << "." << endl;
			if (r>=10) bucle=true;
			else bucle=false;
		}
	}
	cout << "----------" << endl;
}


/*
int main() {
    int x;
    while (cin >> x) {
        int prod = 1;
        if (x < 10) cout << "The product of the digits of " << x << " is " << x << "." << endl;
        else {
            while (x >= 10) {
                int tmp = x;
                while (x > 0) {  
                    prod *= x % 10;
                    x /= 10;
                }
                cout << "The product of the digits of " << tmp << " is " << prod << "." << endl;
                x = prod;
                prod = 1;
            }
        }
        cout << "----------" << endl;
    }
}*/