#include <iostream>
#include <vector>
using namespace std;


// Suposem que una Matriu es defineix aixi
typedef vector<int> Fila;
typedef vector<Fila> Matriu;
    

void llegir_matriu(Matriu& a, int m, int n) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) cin >> a[i][j];
    }
}


// Pre: a i b son compatibles per al producte
// Post: p = a*b
void producte(const Matriu& a, const Matriu& b, Matriu& p) {
    p = Matriu(a.size(),Fila(b[0].size(),0));
    for (int i = 0; i < a.size(); ++i) {
        for (int j = 0; j < b[0].size(); ++j) {
            for (int k = 0; k < b.size(); ++k) { 
                p[i][j] = p[i][j] + a[i][k]*b[k][j];
            }
        }  
    }
}


void escriure(const Matriu& a) {
    cout << endl;
    for (int i = 0; i < a.size(); ++i) {
        cout << "Fila " << i+1 << ": ";
        for (int j = 0; j < a[0].size(); ++j) {
            cout << a[i][j] << "  ";
        }
        cout << endl;
    }
}

   
int main() {
    int m, k, n;
    cin >> m >> k >> n;
    Matriu a(m,Fila(k));
    llegir_matriu(a,m,k);
    Matriu b(k,Fila(n));
    llegir_matriu(b,k,n);
    Matriu prod;
    producte(a,b,prod); 
    escriure(prod);
}
