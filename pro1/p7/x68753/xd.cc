#include <iostream>
#include <vector>
using namespace std;
 
void moda(int n, const vector<int>& p) {
    int aux_moda = 0;
    vector<int> auxp(p.size(),0);
    for (int i = 0; i < n; ++i) {
        auxp[p[i]]++;
    }
    for (int i = 0; i < auxp.size(); ++i) {
        if (p[i] > aux_moda) {
            aux_moda = p[i];
        }
    }
    cout << aux_moda << endl;
}
 
int main() {
    int n;
    while (cin >> n) {
        vector<int> p(n);
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
        }
        moda(n,p);
    }
}