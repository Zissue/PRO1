#include <iostream>
using namespace std;

int main () {

    int k, n, m;
    cin >> k >> n >> m;
    bool p=true;

    for (int i=0; i<k ; i++) {
        int r=9;
        
        if (p) p=false;
        else cout << endl;

        for (int f=1; f<=n ; f++) {
            for (int c=1; c<=m ; c++) {
                if (r<0) r=9;
                cout << r;
                r--;
            }
            if (f!=n) cout << endl;
            
        }
        cout << endl;
    }

}