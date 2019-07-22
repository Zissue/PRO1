#include <iostream>
#include <vector>
using namespace std;

// Pre: (0 <= esq) and (dre < v.size()) and (v esta ordenat creixentment)
// Post: retorna i tal que, o be esq<=i<=dre i v[i]==x, o be i==-1 i x no es a v[esq..dre]
int posicio(double x, const vector<double>& v, int esq, int dre) {
    if (esq > dre) return -1;
    int pos = (esq + dre)/2;        // posicio central de v[esq..dre]
    if (x < v[pos]) return posicio(x, v, esq, pos - 1);
    if (x > v[pos]) return posicio(x, v, pos + 1, dre);
    return pos;
}


int main() {
   int n;
   double val;
   cin >> n;
   vector<double> v(n);

   for (int i = 0; i < n; ++i) cin >> v[i];

   while (cin >> val) {
       cout << posicio(val,v,0,int(v.size())-1) << endl;
   }
}
