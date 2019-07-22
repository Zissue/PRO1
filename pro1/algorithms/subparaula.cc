#include <iostream>
#include <string>
using namespace std;


// Pre: cap
// Post: o be 0<=i< y.size() i x==y[i..i+x.size()-1] i x no apareix abans a y, 
//       o be i==-1 i x no apareix enlloc dins de y
int posicio (const string& x, const string& y) {
   int i = 0;
   bool trobat = (x.size() == 0);
   int n = int(y.size()) - int(x.size());
   // Inv: no hi ha cap ocurrencia de x en y que 
   // comenci en posicions 0..i-1
   while (not trobat and i <= n) {
       int j = 0;
       bool encaixa = true;
       // Inv: ..., i a mes x[0..j-1] == y[i..i+j-1]
       while (encaixa and j < x.size()) {
           encaixa = (x[j] == y[i+j]);
           ++j;
       }
       if (encaixa) trobat = true;
       else ++i;
   }
   if (trobat) return i;
   else {
       i = -1;
       return i;
   }
}


// Pre: cap
// Post: o be 0<=i<y.size() i x==y[i..i+x.size()-1], 
//       o be i==-1 i x no apareix enlloc dins de y
int posicio_alternativa (const string& x, const string& y) {
    int i,j;
    i=j=0;
    int n = int(y.size()) - int(x.size());
    // Inv: no hi ha cap ocurrencia de x en y
    // que comenci en posicions 0..i-1, 
    // i a mes x[0..j-1] == y[i..i+j-1]
    while (j < x.size() and i <= n) {
        if (x[j] == y[i+j]) ++j;
        else {
             j=0;
             ++i;
        }
    }
    if (j == x.size()) return i;
    else {
        i = -1;
        return i;
    }
}


int main() {
   string x,y;
   while (cin >> x >> y) {
       cout << posicio(x,y) << endl;
   }
}
