#include <iostream>
using namespace std;

int max4(int a, int b, int c, int d) {
    return max(max(max(a,b),c),d);
}