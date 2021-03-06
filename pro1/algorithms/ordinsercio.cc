#include <iostream>
#include <vector>
using namespace std;


// Pre: cap
// Post: v conte els elements inicials i esta ordenat creixentment
void ordena_per_insercio(vector<double>& v) {
    // Inv: v[0..i-1] esta ordenat creixentment
    for (int i = 1; i < v.size(); ++i) {
        double x = v[i];
        int j = i;
        while (j > 0 and v[j - 1] > x) {
            v[j] = v[j - 1];
            --j;
        }
        v[j] = x;
    }
}

int main() {
   int n;
   cin >> n;
   vector<double> v(n);

   for (int i = 0; i < n; ++i) cin >> v[i];
   ordena_per_insercio(v);
   for (int i = 0; i < n; ++i) cout << v[i] << " "; 
   cout << endl;

}
