#include <iostream>
#include <vector>
using namespace std;

bool es_pangrama(const vector<bool>& v) {
    for (int i = 0; i < v.size(); ++i) if (not v[i]) return false;
    return true;
} 

int main() {
	const int nletras = int ('z') - int ('a') + 1;
	vector<bool> vletras(nletras, false);
	char c;
	while (cin >> c) {
		if ('A' <= c and c <= 'Z') c = c - 'A' + 'a';
		if ('a' <= c and c <= 'z') vletras[int(c) - int('a')] = true;
		else if (c == '.') {
			if (es_pangrama(vletras)) cout << "SI" << endl;
			else cout << "NO" << endl;
			vletras = vector<bool>(nletras, false);
		}
	}
}