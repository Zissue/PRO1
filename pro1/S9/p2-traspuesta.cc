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


//pre:
//post: escribe por filas en output la matriz mat
void escribir_matrix(const Matrix& mat) {
    int m = mat.size();
    int n = mat[0].size();
    for (int i = 0; i < m; ++i) {
        cout << mat[i][0];
        for (int j = 1; j < n; ++j) 
            cout << ' ' << mat[i][j];
        cout << endl;
    }
}
    

    
//pre:---
//post: retorrna la traspuesta de a
Matrix traspuesta(const Matrix& a) { 
    int m = a.size(); //numero d efilas;
    int n = a[0].size(); //numero de columnas
    Matrix r = Matrix(n, Fila(m));
    for (int i = 0; i < m; ++ i) 
        for (int j = 0; j < n; ++j) 
            r[j][i] = a[i][j];
    return r;
    


}

//en input hay dos numeros m y n  y una  matriz m x n
//escribe en output la matriz traspuesta
int main() {
    int m, n;
    cin >> m >> n;
    Matrix a = leer_matrix(m, n);
    Matrix r = traspuesta(a);
    escribir_matrix(r);
}
    

    