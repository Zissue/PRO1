#include <iostream>
using namespace std;
 
int main () {
        int n;
        while (cin >> n) {
                int max = 0;
                int suma = 0;
                for (int i = 0; i < n; ++i) {
                        int x;
                        cin >> x;
                        suma += x;
                        if (x > max) max = x;
                }
                if (suma - max == max) cout << "YES" << endl;
                else cout << "NO" << endl;
        }
}