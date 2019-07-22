#include <iostream>
#include <vector>
using namespace std;


struct Parell {
    int pos;     // ha de ser mes gran o igual que zero
    int valor;   // qualsevol valor
};


// Pre: v1, v2 son la representacio comprimida de dos vectors 
// Post: retorna el vector representacio comprimida de v1+v2, de mida 
//       exactament igual que el nombre de components no 0 de v1+v2
vector<Parell> suma_dispersa(const vector<Parell>& v1, const vector<Parell>& v2) {
   int n1 = v1.size();
   int n2 = v2.size();
   vector<Parell> v3(n1 + n2);
   int i,j,k;
   i = j = k = 0;
   // Inv: v3[0..k-1] conté la representació comprimida de v1[0..i-1]+v2[0..j-1]
   while (i < n1 and j < n2) {
       if (v1[i].pos < v2[j].pos) {
          v3[k] = v1[i];
          ++i; ++k;
       } else if (v1[i].pos > v2[j].pos) {
          v3[k] = v2[j];
          ++j; ++k;
       } else if (v1[i].valor + v2[j].valor != 0) {
          v3[k].pos = v1[i].pos; 
          v3[k].valor = v1[i].valor + v2[j].valor;
          ++i; ++j; ++k;
       } else {
          ++i; ++j;
       }
   }
   //copiem a v3 la part restant que resta de v1, si v2 s'ha acabat
   while (i < n1) {
       v3[k] = v1[i];
       ++i; ++k;
   } 
   //copiem a v3 la part restant que resta de v2, si v1 s'ha acabat
   while (j < n2) {
       v3[k] = v2[j];
       ++j; ++k;
   } 
   //creem un vector de la mida justa i hi copiem la part emprada de v3
   vector<Parell> resultat(k);
   for (int m = 0; m < k; ++m) resultat[m] = v3[m];
   return resultat;
}


vector<Parell> llegir_vector(int n) {
   vector<Parell> v(n);

   for (int i = 0; i < n; ++i) {
       cin >> v[i].pos >> v[i].valor;
   }
   return v;
}


void escriure_vector(vector<Parell>& v) {
   cout << "[";
   for (int i=0; i<v.size();++i) {
       cout << "(" << v[i].pos << "," << v[i].valor << ")";
   }
   cout << "]";
}


int main (){
  int n;
  vector<Parell> v1, v2,v3;
  cin >> n; v1 = llegir_vector(n);
  cin >> n; v2 = llegir_vector(n);
  v3 = suma_dispersa(v1,v2);
  escriure_vector(v3);
}
