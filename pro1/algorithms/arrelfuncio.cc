#include <iostream>
#include <cmath>
using namespace std;

// Exemple: f té arrels sqrt(2) i -sqrt(2)
double f(double x) {
    return x*x - 2.;
}

// Pre: f es continua, epsilon > 0, a < b i f(a)*f(b) < 0
// Post: retorna c tal que c es a [a,b] i f te una arrel a [c,c + epsilon]
double arrel(double a, double b, double epsilon) {
    if (b - a <= epsilon) return a;
    double c = (a + b)/2;
    if (f(a)*f(c) <= 0) return arrel(a,c,epsilon);
    return arrel(c,b,epsilon);
}

/*
// Pre: f es continua, epsilon > 0, a < b i f(a)*f(b) < 0
// Post: retorna c tal que c es a [a,b] i f te una arrel a [c,c + epsilon]
double arrel(double a, double b, double epsilon) {
    // Inv: f(a)*f(b) <= 0
    while (b - a > epsilon) {
        double c = (a + b)/2;
        if (f(a)*f(c) <= 0) b = c;
        else a = c;
    }
    return a;
}
*/

int main() {
    double c;

    c = arrel(1.,2.,1E-10);
    cout << "f(" << c << ")=" << f(c) << endl;

    c = arrel(-2.,0,1E-10);
    cout << "f(" << c << ")=" << f(c) << endl;
}
