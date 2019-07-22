#include <iostream>
#include <string>
using namespace std;

int main () {

    string hola;
    int count=0;
    while (cin>>hola) {
        if (hola=="hola") count++;
    }
    cout << count++ << endl;
}