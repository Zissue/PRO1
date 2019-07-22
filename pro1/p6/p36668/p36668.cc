#include <iostream>
using namespace std;

int si2 (int x) {
    if (x > 0) return x*x + si2 (x-1); 
    else return 0;
}

int main () {
    int n; 
    cin >> n;
    cout << si2(n) << endl;
}