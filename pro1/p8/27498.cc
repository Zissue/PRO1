#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matriu;

void swap(int& a, int& b) {
    int x = a;
    a = b;
    b = x;
}

void transposa(Matriu& m) {
    for (int i = 0; i < m.size(); i++)
        for (int j = 0; j < i; j++) {
            swap(m[i][j], m[j][i]);
        }
}