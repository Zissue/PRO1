#include <iostream>
#include <vector>
using namespace std;

int last_position_of(const vector<int> &v, int x) {
    int r = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == x) r = i;
    }
    return r;
}

int main () {
    int n;
    while (cin >> n) {
        vector<int> v(n);
        int r = 0;
        for (int i = 0; i < v.size(); i++) {
           cin >> v[i];
           r = r + v[i];
        } 
        int media = r/v.size();
        cout << last_position_of(v,media) << endl;
    }
}