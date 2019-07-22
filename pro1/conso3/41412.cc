#include <iostream>
#include <vector>
using namespace std;

void ordena_per_insercio(vector<double>& v) {
    for (int i = 1; i < v.size(); i++)
        for (int j = i; j > 0 and v[j-1] > v[j]; j--) 
            swap(v[j],v[j-1]);
}