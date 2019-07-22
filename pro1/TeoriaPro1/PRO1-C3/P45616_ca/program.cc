#include <iostream>
using namespace std;

struct Rellotge {
	int h;
	int m;
	int s;
};

Rellotge mitja_nit () {
	Rellotge reloj;
	reloj.h = reloj.m = reloj.s = 0;
	return reloj;
}

void escriu(const Rellotge& r) {
    if (r.h < 10) cout << 0; 
    cout << r.h << ':';
    if (r.m < 10) cout << 0 << r.m << ':';
    else cout << r.m << ':';
    if (r.s < 10) cout << 0 << r.s << endl;
    else cout << r.s << endl;
}

void incrementa(Rellotge& r) {
	r.s = r.s + 1;
	if (r.s == 60) {
		r.s = 0;
		r.m = r.m + 1;
		if (r.m == 60) {
			r.m = 0;
			r.h = r.h + 1;
			if (r.h == 24) r.h = 0;
		}
	}
}

int main() {
	Rellotge r = mitja_nit();
	escriu(r); 
	incrementa(r);
	escriu(r);
}