#include <iostream>
using namespace std;

int main () {

    int n;
    cin >> n;
    int xf=0, n1=0, n2=0;
    
    for (int i=n; i!=0 ; i/=10) xf++; 

    if (xf%2!=0 or n==0) cout << "res" << endl;
    else {
        xf=xf/2;
        for (int i=xf; i!=0; i--) {
        n2=n2+(n%10);
        n=n/10;
        }
        for (int i=xf; i!=0; i--) {
        n1=n1+(n%10);
        n=n/10;
        }
        if (n1>n2) cout << n1 << " > " << n2 << endl;
        else if (n2>n1) cout << n1 << " < " << n2 << endl;
            else if (n2==n1) cout << n1 << " = " << n2 << endl;
                else cout <<  "res" << endl;
    }
    

}