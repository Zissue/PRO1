#include <iostream>
using namespace std;

int mcd(int a, int b) {
    while (b != 0) {
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}
