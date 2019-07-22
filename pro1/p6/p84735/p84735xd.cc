#include <iostream>
using namespace std;

int main () {
    int a, b, x = 0;
    int count = 0;

    while (cin >> a >> b) {
        count++;
        bool trobat = false;
        for (int i = a; (i < 9999999) and (!trobat); i++) {
            if (i%b == 0) {
                x = i;
                trobat = true;
            }
        }
        cout << "#" << count << " : " << x << endl;  
    }
}