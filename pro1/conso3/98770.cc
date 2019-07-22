#include <iostream>
#include <vector>
using namespace std;

void calcula_posicions(const vector<double>& v, int& p, int& q) {
    int max = v[0];
    for (int i = 0; i < v.size(); i++) {
        if (max < v[i]) {
            max = v[i];
            q = p;
            p = i;
        }
    }
}

void llegeixV(vector<double>& v) {
    for (int i = 0; i < v.size(); i++) {
        cin >> v[i];
    }
}

int main () {
    cout.setf(ios::fixed);
    cout.precision(6);

    int n;
    while (cin >> n) {
        vector<double> v(n);
        llegeixV(v);
        int p = 0, q = 0;
        calcula_posicions(v, p, q);
        double mean = 0;
        for (int i = q; i <= p; i++) {
            mean += v[i];
        }
        cout << double(mean/(p-q+1))  << endl;
    }
}