#include <iostream>
using namespace std;

int suma_divisors(int a) {
    int r = 0;
    for (int i = 2; i*i <= a; i++) {
        if (a%i == 0) r = r + i;
    }
    return r;
}

bool son_amics(int a, int b){
    if (suma_divisors(a) == b and suma_divisors(b) == a and a != b) return true;
    else return false;
}

int main () {
    int a, b;
    cin >> a >> b;
    if (son_amics(a,b)) cout << "(" << a << " " << b << ")";
    while (cin >> a >> b) {
        if (son_amics(a,b)) cout << ",(" << a << " " << b << ")";
    }
}