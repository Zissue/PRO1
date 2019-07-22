#include <iostream>
#include <vector>
using namespace std;


// Pre: (0 <= esq) and (dre < v.size()) and (v esta ordenat creixentment)
// Post: retorna i tal que, o be esq<=i<=dre i v[i]==x, o be i==-1 i x no es a v[esq..dre]
int posicio(double x, const vector<double>& v, int esq, int dre) {
    int pos;
    bool trobat = false;
       // Inv: (0 <= esq), (dre < v.size()),
       // si x es a v[E..D], llavors es a v[esq..dre]
       // on E i D son els valors inicials d'esq i dre,
       // i a mes trobat indica que hem trobat x a pos
    while (not trobat and esq <= dre) {
		pos = (esq + dre)/2;        // posicio central de v[esq..dre]
		if (x < v[pos]) dre = pos - 1;
		else if (x > v[pos]) esq = pos + 1;
		else trobat = true;
	}
	if (trobat) return pos;
	else return -1;
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
