#include <iostream>
using namespace std;
 
int engreixa (int n) {
    if (n < 10) return n;
    else {
        int e = engreixa(n/10);
        int m = max(e%10, n%10);
        return e*10 + m;
    }
}

int main () {
    int n;
    cin >> n;
    cout << engreixa(n) << endl;
}