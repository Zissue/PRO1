#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Rectangle {
	int est, oest, nord, sud;
};

void llegeix(Rectangle& a) {
	cin >> a.est >> a.oest >> a.nord >> a.sud;
}

bool comp(const Rectangle& a, const Rectangle& b) {
	return a.est > b.est;
}
bool esta_inclos(const Rectangle& a, const Rectangle& b) {
	return a.est < b.est and a.oest > b.oest and a.nord < b.nord and a.sud > b.sud;
}

bool son_nines_russes(const vector<Rectangle>& v) {
	for (int i = 1; i < v.size(); ++i) if (not esta_inclos(v[i], v[i - 1])) return false;
	return true;
}

void escriu(const Rectangle& a) {
	cout << a.est << " " << a.oest << " " << a.nord << " " << a.sud << endl;
}

int main() {
	bool primer = true;
	int n;
	while (cin >> n) {
		if (primer) primer = false;
		else cout << endl;
		vector<Rectangle> v(n);
		for (int i = 0; i < n; ++i) llegeix(v[i]);
		sort(v.begin(), v.end(), comp);
		if (son_nines_russes(v)) for (int i = 0; i < n; ++i) escriu(v[i]);
		else cout << "no son nines russes" << endl;
	}
}