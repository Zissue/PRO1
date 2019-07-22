#include <iostream>
using namespace std;

int main () {

    int n;
    cin >> n;
    double f=1;
    for (int i=2;i<=n;i++){
        f=f*i;
    }
    cout << "El factorial de " << n << " es " << f << endl;
}