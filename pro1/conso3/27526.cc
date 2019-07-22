#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > Matrix;

void swap(Matrix& mat, int j, int k) {
    for (int i = 0; i < mat.size(); i++) {
        swap(mat[i][j],mat[i][k]);
    }
}

void readMatrix(Matrix& a) {
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a[0].size(); j++) {
            cin >> a[i][j];
        }
    }
}

void printMatrix(Matrix& a) {
    bool first = true;
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a[0].size(); j++) {
            if (first) {
                cout << a[i][j];
                first = false;
            }
            else cout << " " << a[i][j];
        }
        cout << endl;
        first = true;
    }
}

int main () {
    int rows, cols;
    cin >> rows >> cols;
    Matrix a(rows, vector<int> (cols));
    readMatrix(a);
    bool first = true;
    int j, k;
    while (cin >> j >> k) {
        if (first) {
            cout << "-----" << endl;
            first = false;
        }
        printMatrix(a);
        cout << "-----" << endl;
        swap(a,j,k);
    }
    if (first) {
        cout << "-----" << endl;
        first = false;
    }
    printMatrix(a);
    cout << "-----" << endl;
}