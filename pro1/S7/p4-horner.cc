#include <iostream>
#include <vector>
using namespace std;

//Pre: poly[i] es el coeficiente de grado i de un polinomio
//Post: retorna la evaluacion del polinomio en x
double eval_horner(const vector<double>& poly, double x) {
    double result = 0;
    int grado = poly.size() - 1;
    for (int i = grado; i >= 0; --i)
        result = result*x + poly[i];
    return result;
}

int main() {
}
