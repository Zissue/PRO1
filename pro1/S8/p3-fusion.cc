#include <iostream>
#include <vector>
using namespace std;


//pre:---
//post: valores del vector escritos en output
void escribir_vector(const vector<int>& v) {
    int n = v.size();
    cout << v[0];
    for (int i = 1; i < n; ++i)
	cout << ' ' << v[i];
    cout << endl;
}


//pre: u y v estan ordenados crecientemente
//post: el vector resultado esta ordenado crecientemente y contiene los valores originales de u y v
vector<int> fusion(const vector<int>& u, const vector<int>& v) {
	int n = u.size();
	int m = v.size();
	vector <int> res(n + m);
	int i = 0;  //indice de u
	int j = 0;  //indice de v
 	int k = 0;  //indice de res
	while (i < n and j < m) {
		if (u[i] <=  v[j]) {
			res[k] = u[i];
			++i;
		}
		else {
			res[k] = v[j];
			++j;
		}
		++k;
	}
	while (i < n) {
		res[k] = u[i];
		++i;
		++k;
	}	
	while (j < m) {
		res[k] = v[j];
		++j;
		++k;
	}
	return res;
}

int main() {
	vector<int> a(7);
	vector<int> b(5);
	a[0] = 1; a[1] = 1; a[2] = 6; a[3] = 12; a[4] = 14; a[5] = 15, a[6] = 20;
	b[0] = 0; b[1] = 6; b[2] = 14; b[3] = 16; b[4] = 19;
 	escribir_vector(fusion(a,b));
}
