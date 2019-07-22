#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > Matriu;

int suma_diagonals(const Matriu& mat) {
	if (mat.size() == 1) return mat[0][0];
	int diag1 = 0, diag2 = 0;
	int j = mat.size()-1;
	for (int i = 0; i < mat.size(); ++i) {
		diag1 += mat[i][i];
		diag2 += mat[i][j];
		--j;
	}
	if (mat.size() % 2 != 0) return diag1 + diag2 - mat[mat.size()/2][mat.size()/2];
	return diag1 + diag2;
}

int main() {
	int n;
	while(cin >> n) {
		Matriu mat(n, vector<int>(n));
		for (int i = 0; i < n; ++i) for (int j = 0; j < n; ++j) cin >> mat[i][j];
		cout << suma_diagonals(mat) << endl;
	}
}