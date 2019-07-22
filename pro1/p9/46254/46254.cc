#include <iostream>
#include <cmath>
using namespace std;

struct Punt {
    double x, y;
};

double distancia(const Punt& a, const Punt& b) {
    double c1, c2;
    c1 = a.x - b.x;
    c2 = a.y - b.y;
    return sqrt(c1*c1 + c2*c2);
}