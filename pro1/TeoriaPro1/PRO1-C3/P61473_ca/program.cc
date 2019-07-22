#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matriu;

bool es_simetrica(const Matriu &m) {
    for (int i = 0; i < m.size(); ++i) {
        for (int j = 0; j < m.size(); ++j) {
        	if (m[i][j] != m[j][i]) return false;
        }
    }
    return true;
}