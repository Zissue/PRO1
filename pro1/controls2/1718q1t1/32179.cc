#include <iostream>
using namespace std;

int main () {
    int n2 = 0, n, pos = 0, count = 0;
    while (cin >> n) {
        pos++;
        if (pos == 2) n2 = n;
        if (pos%2 == 0 and n == n2) count++;
    }
    cout << count << endl; 
}