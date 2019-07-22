#include <iostream>
using namespace std;

int main () {

    int n, x2;
    
    while (cin >> n) {
        int x1=x2+1;
        int count=0;

        for (int i=1; i<=n; i++) {
            cin >> x2;
            if (x1==(-1)*x2) count++;
            x1=x2;
        }
        cout << count << endl;
    }
}