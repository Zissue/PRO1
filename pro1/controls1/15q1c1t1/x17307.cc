#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int n;
    
    while (cin >> n) {
        int x1, x2;
        int r=0;
        bool p=true;
        for (int i=0; i<n; i++) {
            cin >> x2;
            if (p) p=false;
            else {
                if (abs(x2-abs(x1)) > r) r=x2-x1; 
            }
            x1=x2;
        }
        cout << abs(r) << endl;
    }
}
    