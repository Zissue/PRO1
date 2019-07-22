#include <iostream>
using namespace std;

int main () {
    
    int n;
    cin >> n;
    
    int fila=0;
    while (fila < n) {
        int i=0;
        int j=fila;
        
        while (j+1<n) {
            cout << "+";
            j++;
        }
        
        cout << "/";
        
        while (i+1<=fila) {
            cout << "*";
            i++;
        }
        
        fila++;
        cout << endl;
    }
}
