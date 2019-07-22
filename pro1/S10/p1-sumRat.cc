#include <iostream>
using namespace std;

//tipo para representar a un racional 
struct Rational {
    int num;
    int den;
    //den > 0
};


//pre: n y m no negativos
//post: retorna el maximo comun divisor de n y m
int mcd(int n, int m) {
    while (n != 0 and m != 0) {
        int aux = n%m;
        n = m;
        m = aux;
    }
    return n + m;
}


//pre: --
//post: retorna el valor absoluto de n
int abs(int n) {
    if (n < 0) return (-1)*n;
    return n;
}


//pre: --
//post: la expresion simplificada de r    
void simplificar(Rational& r) {
    int factor_comun = mcd(abs(r.num), r.den);
    r.num = r.num/factor_comun;
    r.den = r.den/factor_comun;
}

//pre: cierto
//post: retorna la suma de a y b
Rational sum(Rational a, Rational b) {
    Rational s;
    s.num = a.num*b.den + b.num*a.den;
    s.den = a.den*b.den;
    simplificar(s);
    return s;
}

int main() {
    Rational a, b;
    cin >> a.num >> a.den >> b.num >> b.den;
    Rational s = sum(a, b);
    cout << s.num << ' ' << s.den << endl;
}


