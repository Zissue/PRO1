#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


//pre: ---
//post: escribe en salida los valores del vector s separados por un ' '
void escribir_vector(const vector<int>& s) {
    cout << s[0];
    int n = s.size();
    for (int i = 1; i < n; ++i)
        cout << ' ' <<  s[i];
    cout << endl;
}


bool comp(int a, int b) {
    return a > b;
}


int main() {
    vector<int> v(5);
    v[0] = 8; v[1] = -3; v[2]= 2; v[3] = 0; v[4] = 1;
    sort(v.begin(), v.end());
    escribir_vector(v);
    sort(v.begin(), v.end(), comp);
    escribir_vector(v);
}
