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


//pre: m es el tammano de la matriz cuadrada y 0 <= i < m and 0 <= j < m. 
//post: actualiza indice i, j en recorrido por diagonales. 
//      La ultima actualizacion hace i == m 
void actualizar(int& i, int&j, int m) {
    ++j;
    --i;
    //corregimos ahora i y j si no son indices validos
    if (i == m - 2  and j == m) {
        //Completado, creamos marca de finalizacion
        i = m;
    }
    else if (i == -1 and j < m) {
        int k = i + j; //define la diagonal que se ha completado
        i = k + 1;
        j = 0;
    }
    else if (j == m) {
        int k = i + j; //define la diagonal que se ha completado
        i = m - 1;
        j = k + 1 - i;
    }
        
}


//pre: mat no vacia
//post: escribe por diagonales  en output la matriz mat
void escribir_por_diagonales_matrix(const Matrix& mat) {
    int m = mat.size();
    cout << mat[0][0];
    int i = 1;
    int j = 0;
    while (i != m and j != m) {
        cout << ' ' << mat[i][j];
        actualizar(i, j, m);
    }
    cout << endl;
}
    
    



//en input hay  un numero numeros m   y una matriz m x m
//escribe en output los valores de la matriz en un recorrido por diagonales
int main() {
    int m;
    cin >> m;
    Matrix a = leer_matrix(m, m);
    escribir_por_diagonales_matrix(a);
}
    

    
