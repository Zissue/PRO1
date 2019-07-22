#include <iostream>
using namespace std;

int main () {

    int n;
    while (cin >> n) {

        for (int f=0; f<n; f++) {
            for (int c=0; c<n; c++) {
                if (f!=0 and f!=n-1 and c!=0 and c!=n-1 and f!=c and c!=n-f-1) cout << " ";
                else {
                    if (f==0 or f==n-1) {
                        if (c==0 or c==n-1) cout << "+";
                        else cout << "-";
                    }
                    if ((c==0 or c==n-1) and (f>0 and f<n-1)) cout << "|";
                    if (f==c and f>0 and f<n-1) cout << "\\";
                    if (c==n-f-1 and f>0 and f<n-1) cout << "/";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
}