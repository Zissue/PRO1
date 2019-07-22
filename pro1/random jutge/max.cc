#include <iostream>
using namespace std;
 
int main() {
   int n, x, y, s, r;
   while (cin >> n >> x) {
        s = 0;
        for (int i = 1; i<n; ++i) {
            cin >> y;
            r = x - y;
            if (r < 0) r = -r;
            if (r>s) s = r;
            x = y;
        }
        cout << s << endl;
   }
}