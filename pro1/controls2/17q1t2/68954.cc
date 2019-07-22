#include <iostream>
using namespace std;

int dm(int x) {
    if (x == 0) return 0;
    else return max(x%10,dm(x/10));
}

int main () {
    int n; 
    while (cin >> n) {
        cout << "Maximum digit of " << n << " is " << dm(n) << "." << endl;
    }
}