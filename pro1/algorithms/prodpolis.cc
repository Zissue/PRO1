#include <iostream>
#include <vector>
using namespace std;


const int NDEC = 5;


typedef vector<double> Coef;


struct Poli {
    int grau;
    Coef coefs;
};


// Pre: 0<=p.grau<p.coefs.size(), 0<=q.grau<q.coefs.size()
// Post: retorna el polinomi p*q, amb el mateix conveni de representacio
Poli producte(const Poli& p, const Poli& q) {
     int n = p.grau + q.grau;
     Poli r;
     r.grau = n;
     Coef c(n+1,0);
     r.coefs = c;
     for (int i = 0; i <= p.grau; ++i) {
         for (int j = 0; j <= q.grau; ++j) {
             r.coefs[i+j] = r.coefs[i+j] + p.coefs[i]*q.coefs[j];
         }
     }
     return r;               
}


void llegir_poli(Poli& p) {
    cin >> p.grau;
    p.coefs = Coef(p.grau+1);
    for (int i = 0; i <= p.grau; ++i) { 
        cin >> p.coefs[i];
    }
}


void escriure_poli(const Poli &p) {
    for (int i = 0; i <= p.grau; ++i) { 
        cout << p.coefs[i] << " ";
    }
    cout << endl;
}


int main(){
    cout.setf(ios::fixed);
    cout.precision(NDEC);	
    Poli p,q,resultat;
    llegir_poli(p);
    llegir_poli(q);
    resultat = producte(p,q);
    escriure_poli(resultat);
}
        

