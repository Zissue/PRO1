#include <iostream>
using namespace std;

int main () {

    int x1, x2, x3, x4;
    int inc=0, fold=0;  
    while (cin >> x1 >> x2 >> x3 >> x4) {
        if (x1<x2 and x2<x3 and x3<x4) inc++;

        if (x1==x3 and x2==x4) fold++;
    }
    cout << "Increasing: " << inc << endl;
    cout << "Folded: " << fold << endl;
}