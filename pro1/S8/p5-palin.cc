#include <iostream>
#include <vector>
using namespace std;

//pre:--
//post: el resultado indica si el vector es palindromo (capicua)
bool es_palindromo(const vector<int>& v) {
	int iz = 0;
	int de = v.size() - 1;
	while (iz < de and v[iz] == v[de]) {
		++iz;
		--de;
	}
	return iz >= de;
}


int main() {
	vector <int> v(6);
	v[0] = 3; v[1] = 12; v[2] = 0; v[3] = 0, v[4] = 12; v[5] = 3;
	cout << es_palindromo(v) << endl;
}