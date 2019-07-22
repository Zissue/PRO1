#include <iostream>
#include <vector>
using namespace std;

typedef  vector<vector<int> > Mat;

Mat llegirMat(int n, int m) {
   Mat A(n, vector<int>(m));
   for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
         cin >> A[i][j];
      }
   }
   return A;
}

// IF YOU WRITE NEW FUNCTIONS/PROCEDURES, ADD THEM HERE

bool sumes_decreixents (const Mat& A){
  // ADD YOUR CODE HERE
    int aux1 = 0, aux2;
    bool first = true;
    for (int i = 0; i < A.size(); i++) {
        for (int j = 0; j < A[0].size(); j++) {
            aux1 += A[i][j];
        }
        if (first) {
            first = false;
        } 
        else if (aux1 >= aux2) return false;
        aux2 = aux1;
        aux1 = 0;
    }
    return true;
}

int main() {
   int n,m;
   while (cin >> n >> m) {
      Mat A = llegirMat(n,m);
      if (sumes_decreixents(A)) cout << "YES" << endl;
      else cout << "NO" << endl;
   }
}