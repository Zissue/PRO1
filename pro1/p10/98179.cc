#include <iostream>
#include <vector>
using namespace std;

void insereix(vector<double>& v) {
    for (int i = v.size()-1; i > 0 and v[i] < v[i-1]; i--)
        swap(v[i],v[i-1]);
}