#include <iostream>
using namespace std;
 
int main() {
   int n, x, y, s;
   while (cin >> n >> x) {
    s = 0;
    for (int i=1; i<n; ++i) {
    cin >> y;
    if ((x<0 and y>0) or (x>0 and y<0)) s++;
    x = y;
    }
    cout << s << endl;
   }
}