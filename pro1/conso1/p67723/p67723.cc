#include <iostream>
using namespace std;

int main () {

    int a, b;
    cin >> a >> b;
    int ao=a, bo=b;
    cout << "El mcd de " << a << " i " << b << " es ";

    // Apliquem el algoritme de Euclides per trobar mcd(a,b)
    while (b!=0){
        int r=a%b;
        a=b;
        b=r;
    }
    
    cout << a << "." << endl;
}