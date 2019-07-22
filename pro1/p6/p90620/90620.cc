#include <iostream>
using namespace std;

bool pic(int n1, int n2, int n3) {
    if (n1 < n2 and n2 > n3) return true;
    else return false;
}

int main () {
    int n1, n2, n3;
    bool found = false;
    cin >> n1 >> n2;
    while (cin >> n3 and !found and n3 != 0) {
        if (pic(n1,n2,n3) and n2 > 3143) found = true;
        n1 = n2;
        n2 = n3;
    }

    if (found) cout << "SI";
    else cout << "NO";
    cout << endl;
}