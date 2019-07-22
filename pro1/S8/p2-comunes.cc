#include <iostream>
#include <vector>
using namespace std;



//pre: u y v estan ordenados crecientemente. u no tiene elementos repetidos
//       v no tiene elementos repetidos
//post: retorna el numero de elemntos comunes de u y v
int cuenta_comunes(const vector<int>& u, const vector<int>& v) {
	int n = u.size();
	int m= v.size();
	int count = 0;
	int i = 0;
	int j = 0;
	while (i < n and j < m) {
		if (u[i] < v[j]) ++i;
		else if (u[i] > v[j]) ++j;
		else {
			++count;
			++i;
			++j;
		}
	}
	return count;
}



int main() {
	vector<int> a(7);
	vector<int> b(5);
	a[0] = 1; a[1] = 3; a[2] = 6; a[3] = 12; a[4] = 14; a[5] = 15, a[6] = 20;
	b[0] = 0; b[1] = 6; b[2] = 14; b[3] = 16; b[4] = 19;
 	cout << cuenta_comunes(a, b) << endl;
}

