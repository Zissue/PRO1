#include <iostream>
#include <vector>
using namespace std;


typedef vector<int> Fila;
typedef vector<Fila> Matrix;


//pre: n, m son mayores que cero
//post: retorna una matriz m x n leida por filas del input
Matrix leer_matrix(int m, int n) {
    Matrix mat(m, Fila(n));
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j) 
            cin >> mat[i][j];
    return mat;
}


void siguiente(int& i, int& j, int m) {
    if (j%2 == 0) {
        ++i;
        if (i == m) {
            i = m - 1;
            ++j;
        }
    }
    else {
        --i;
        if (i == -1) {
            i = 0;
            ++j;
        }
    }
}


int zigzag_search_neg(const Matrix& a) {
    int m = a.size();
    int n = a[0].size();
    int i = 0;
    int j = 0;
    while (j < n and a[i][j] >= 0) siguiente(i, j, m);
    if (j < n) return a[i][j];
    return 0;
}
    
    



//en input hay dos numeros m y n  y una matriz m x n
//escribe en output el primer valor negativo de la matriz en
//el recorrido en zigzag por columnas. Escribe 0 si todos los valores
//son no negativos
int main() {
    int m, n;
    cin >> m >> n;
    Matrix a = leer_matrix(m,n);
    cout << zigzag_search_neg(a) << endl;
}
    

    
