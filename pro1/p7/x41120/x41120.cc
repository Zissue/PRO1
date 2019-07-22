#include <iostream>
#include <vector>
using namespace std;

vector<int> calcula_cims(const vector<int>& v) {
    vector<int> r(v.size(),0);
    int n1, n2, n3, count = 0;
    n1 = -20;
    n2 = -23;
    for (int i = 0; i < r.size(); i++) {
        n3 = v[i];
        if (n1 < n2 and n2 > n3) {
            r[count] = n2;
            count++;    
        }
        n1 = n2;
        n2 = n3;
    }
    for (int i = v.size(); i !=0; i--) {
        if (r[i] == 0) r.pop_back();
    }
    return r;
}

int main () {
    int n, x;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> x;
        v[i] = x;
    }

    int j = calcula_cims(v).size();

    cout << j << ": " << calcula_cims(v)[0];
    for (int i = 1; i < j; i++) {
        cout << " " << calcula_cims(v)[i];
    }
    cout << endl;

    /*for (int i = 0; i < (calcula_cims(v).size()); i++) {
        cout << [i] << " ";
    }
    cout << endl;*/

}