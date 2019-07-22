#include <iostream>
#include <cmath>
using namespace std;

int main () {

    cout.setf(ios::fixed); 
    cout.precision(6);
    
    int n;
    string forma;
    cin >> n;
    
    for (int i=0; i<n; i++) {
        double resultat=0;
        cin >> forma;
        if (forma == "rectangle") {
            double base, altura;
            cin >> base >> altura;
            resultat=base*altura;
            cout << resultat << endl;
            
        }
        
        if (forma == "cercle") {
            double radi;
            cin >> radi;
            resultat = M_PI*(radi*radi);
            cout << resultat << endl;   
        }
        
    }
    
}
