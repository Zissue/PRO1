#include <iostream>
using namespace std;

bool es_any_de_traspas(int any) {

    if (any>=1800 and any<=9999) {
        if ((any%4 == 0 and any%100 != 0) or 
           (any%4 == 0 and (any/100)%4 == 0 )) return true;
        else return false;
    }
    return false;
}