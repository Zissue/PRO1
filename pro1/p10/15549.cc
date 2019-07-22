#include <iostream>
#include <vector>
using namespace std;

void ordena_per_bombolla(vector<double>& v) {
    for (int i = 1; i < v.size(); i++) 
        for (int j = 0; j < v.size()-1; j++) 
            if (v[j] > v[j+1]) swap(v[j],v[j+1]);
}

