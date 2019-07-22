#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matriu;

void escriure_matriu(const Matriu &a) {  
    for (int f = 0; f < a.size(); ++f) {
        bool primer = true;
        for (int c = 0; c < a[0].size(); ++c) {
            if (primer) { 
                cout << a[f][c];
                primer = false;
            }
            else cout << ' ' << a[f][c];
        }
        cout << endl;
    }
}

void intercanvia(Matriu &mat, int j, int k) {
    for (int i = 0; i < mat.size(); ++i) swap(mat[i][j],mat[i][k]);
}

int main() {
    int nf, nc;
    cin >> nf >> nc;
    Matriu a(nf, vector<int>(nc));
    for (int f = 0; f < a.size(); ++f) for (int c = 0; c < a[0].size(); ++c) cin >> a[f][c];
    cout << "-----" << endl;
    escriure_matriu(a);
    cout << "-----" << endl;
    int j, k;
    while (cin >> j >> k) {
        intercanvia(a,j,k);
        escriure_matriu(a);
        cout << "-----" << endl;
    }
}