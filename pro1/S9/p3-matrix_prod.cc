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


//pre: mat es una matriz no vacia
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
    

    
//pre: i es el indice de una fila de a
//     j es un indice de una columna de b
//     numero columnas de a == numero filas b
//post: retorna el producto escalar de fila i de a por
//      columna j de b
int escalar_product(const Matrix& a, const Matrix&b, int i, int j) {
    int n = a[0].size();
    int res = 0;
    for (int index = 0; index < n; ++index) 
        res = res + a[i][index]*b[index][j];
    return res;
}
    
    
    
//pre: a y b son matrices con #columnas(a) == #filas(b)
//post retorna la matriz producto ab
Matrix producto(const Matrix& a, const Matrix& b) {
    int m = a.size(); //numero de filas
    int n = b[0].size(); //numero de columnas de b
    Matrix p = Matrix(m, Fila(n));
    //alternativamente Matrix p(m, Fila(n))
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            p[i][j] = escalar_product(a, b, i, j); 
    return p;
}



//en input hay tres numeros m , k y  n , una matriz m x k y una k x n
//escribe en output la matriz producto, que es m x n
int main() {
    int m, k, n;
    cin >> m >> k >>  n;
    Matrix a = leer_matrix(m, k);
    Matrix b = leer_matrix(k, n);
    Matrix p = producto(a, b);
    cout << endl;
    escribir_matrix(p);
}
    

    