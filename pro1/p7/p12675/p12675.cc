#include <iostream>
#include <vector>
using namespace std;

int elements_comuns (const vector<int>& X, const vector<int>& Y) {
   int tamx, tamy, i, j, count;
   
   tamx = X.size();
   tamy = Y.size();
   i = j = count = 0;

   while (i < tamx and j < tamy) {
        if (X[i] < Y[j]) i++;
        else if (X[i] > Y[j]) j++;
        else {
           i++;
           j++;
           count++;
        }
    }
    return count;
}