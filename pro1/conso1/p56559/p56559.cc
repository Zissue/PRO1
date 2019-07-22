#include <iostream>
using namespace std;

int main () {

    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
        if (a1==b1 and a2==b2) cout << "=" << endl;
        else if (a1<=b1 and a2>=b2 and (a1!=b1 or a2!=b2)) cout << "2" << endl;
        else if (a1>=b1 and a2<=b2 and (a1!=b1 or a2!=b2)) cout << "1" << endl;
            else cout << "?" << endl;
}