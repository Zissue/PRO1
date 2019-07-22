#include <iostream>
using namespace std;

int main () {

    int n;
    char l;
    cin >> n >> l;

    for (int f=1; f<=n; f++) {
        for (int c=1; c<=n; c++) {
            if (f!=c and c!=((n+1)/2) and c!=(n-f+1) and f!=((n+1)/2)) cout << ".";
            else {
                if (f==c) cout << l;
                if (c==((n+1)/2)) cout << l;
                if (c==(n-f+1)) cout << l;
                
            }
            if (f==((n+1)/2) and c<=n) cout << l;
        }
        cout << endl;
    }
}