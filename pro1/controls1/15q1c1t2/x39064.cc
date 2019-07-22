#include <iostream>
#include <cmath>
using namespace std;

int main () {

    int n, m;
    bool p=true;
    while (cin >> n >> m) {
        if (!p) cout << endl;
        for (int f=0; f<n; f++) {
            for (int j=0; j<m; j++) {
                if (((f==0 or f==n-1) and (j==0 or j==m-1)) or (f==n/2 and j==m/2)) cout << "0";
                else {
                    int a, b, c, d, abs1;
                    a=f+j;
                    b=n-1-f+j;
                    c=m-1-j+f;
                    d=m-j+n-f-2;
                    
                    abs1= abs(m/2-j)+abs(n/2-f);
                    cout << min(min(min(a,b),min(c,d)),abs1)%10;
                }    
            }
            cout << endl;
        }
        p=false;
    }
}