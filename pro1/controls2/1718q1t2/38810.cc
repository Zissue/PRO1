#include <iostream>
using namespace std;

int main () {
    int n, x, count = 1, pos = 1;
    cin >> n;
    while (cin >> x) {
        pos++;
        if (x == n and pos%2 != 0) count++;
    }
    cout << count << endl;
}