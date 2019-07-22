#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mostrar_vector(const vector <int> & v) {
	bool primer = true;
	for (int i = 0; i < v.size(); ++i) {
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
        vector<int> v(n);
        for (int i = 0; i < n; ++i) cin >> v[i];
        sort(v.begin(), v.end(), comp);
    	mostrar_vector(v);
    }
}