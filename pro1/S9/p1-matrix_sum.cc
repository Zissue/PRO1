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
    
    

//pre: a y b son matrices del mismo tamanno
//post retorna la matriz a + b
Matrix sum(const Matrix& a, const Matrix& b) {
    int m = a.size(); //numero de filas
    int n = a[0].size(); //numero de columnas
    Matrix s = Matrix(m, Fila(n));
    //alternativamente
    //Matrix s(m, Fila(n))
    //vector<vector<int>> s(m, vector<int>(n))
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            s[i][j] = a[i][j] + b[i][j];
    return s;
}

//en input hay dos numeros m y n  y dos matrices m x n
//escribe en output la matriz suma
int main() {
    int m, n;
    cin >> m >> n;
    Matrix a = leer_matrix(m, n);
    Matrix b = leer_matrix(m, n);
    Matrix s = sum(a, b);
    escribir_matrix(s);
}
    

    