#include <iostream>
#include <vector>
using namespace std;


const int NDEC = 5;

typedef vector<double> Coef;

struct Poli {
    int grau;
    Coef coefs;
};


//Pre: cap
//Post: poli representa un polinomi introduit pel canal d'entrada
//      seguint el seguent ordre: primer el grau i despres els coeficients
//      de menor a major grau 
void llegir_poli(Poli& poli) {
    cin >>  poli.grau;
    poli.coefs = Coef(poli.grau + 1);
    for (int i = 0; i <= poli.grau; ++i)
       cin >> poli.coefs[i];
} 


// Pre: 0<=poli.grau<poli.coefs.size()
// Post: retorna el valor del polinomi poli en x
//       es a dir, suma(poli.coefs[i]*x^i,i=0..poli.grau)
double horner(const Poli& poli, double x) {
    double aval = 0.;
    // Inv: aval = valor de poli[poli.grau...i+1](x)
    for (int i = poli.grau; i >= 0; --i) {
        aval = aval*x + poli.coefs[i];
    }
    return aval;
}


// Pre: 0<=poli.grau<poli.coefs.size()
// Post: retorna el valor del polinomi poli en x
//       es a dir, suma(poli.coefs[i]*x^i,i=0..poli.grau)
double avalpoli(const Poli& poli, double x) {
    double aval = 0.;
    double pot = 1.;
    // Inv: aval = valor de poli[i-1...0](x) and pot = x^i
    for (int i = 0; i <= poli.grau; ++i) {
        aval = aval + pot*poli.coefs[i];
        pot = pot*x;
    }
    return aval;
}


int main() {
    cout.setf(ios::fixed);
    cout.precision(NDEC);	
    Poli poli;
    llegir_poli(poli);
    int k;
    cin >> k;
    while (k > 0) {
        double x;
        cin >> x;
        cout << horner(poli,x) << endl;
        --k;
    }
}        

