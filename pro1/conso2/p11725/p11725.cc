#include <iostream>
#include <vector>
using namespace std;

bool hi_es(int x, const vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        if (x == v[i]) return true;
    }
    return false;
}