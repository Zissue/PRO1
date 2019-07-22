#include <iostream>
using namespace std;

struct Data {
	int dia, mes, any;
};

Data data_llegida() {
	Data d;
	char c;
	cin >> d.dia >> c >> d.mes >> c >> d.any;
	return d;
}

bool menor(const Data& d1, const Data& d2) {
	if (d1.any != d2.any) return d1.any < d2.any;
	if (d1.mes != d2.mes) return d1.mes < d2.mes;
	return d1.dia < d2.dia;
}

int main() {
	int n;
	cin >> n;
	Data d1;
	Data d2 = data_llegida();
	Data d3 = data_llegida();
	n -= 2;
	bool trobada = false;
	while (n > 0 and not trobada) {
		--n;
		d1 = d2;
		d2 = d3;
		d3 = data_llegida();
		if (menor(d1, d2)) trobada = menor(d2, d3);
		else trobada = menor(d3, d2);
	}
	if (trobada) cout << d2.dia << '/' << d2.mes << '/' << d2.any << endl;
	else cout << "cap data trobada" << endl;
}