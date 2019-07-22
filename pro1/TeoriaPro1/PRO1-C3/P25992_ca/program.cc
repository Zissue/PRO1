#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mostrar_vector(const vector <int> & v, int k) {
	bool primer = true;
	for (int i = 0; i < k; ++i) {
		if (primer) {
			cout << v[i];
			primer = false;
		}
		else cout << ' ' << v[i];
	}
	cout << endl;
}

bool comp(int a, int b) { 
    return a > b;
}

int main() {
    int n;
    while (cin >> n) {
    	int i, j;
    	i = j = 0;
    	vector<int> par(1000);
    	vector<int> impar(1000);
    	while (n != 0) {
    		if (n%2 == 0) {
    			par[i] = n;
    			++i;
    		}
    		else {
    			impar[j] = n;
    			++j;
    		}
    		cin >> n;
    	}
    	sort(par.begin(), par.begin() + i);
    	sort(impar.begin(), impar.begin() + j, comp);
    	mostrar_vector(par, i);
    	mostrar_vector(impar, j);
    }
}