#include <iostream>
#include <map>
using namespace std;

int main() {
	int n;
	cin >> n;
	map<string, int> m;
	for (int i = 0; i < n; ++i) {
		string nen, joguina, aux;
		cin >> nen >> joguina;
		aux = nen + ' ' + joguina;
		++m[aux];
	}
	map<string, int>::iterator it = m.begin();
	while (it != m.end()) {
		cout << it->first << ' ' << it->second << endl;
		++it;
	}
}