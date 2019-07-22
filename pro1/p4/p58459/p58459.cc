#include <iostream>
using namespace std;

bool es_data_valida(int d, int m, int a) {

    if(m > 0 and  m <= 12 and m != 2) {
      if((m%2 == 0 and m <= 7) or (m%2 != 0 and m >=8)) {
            if (d > 0 and d <= 30) return true;
            else return false;
        }
      else {
        if (d > 0 and d <= 31) return true;
        else return false;
      }
    }

    else if(m == 2) {
      if((a%4 == 0 and (a%100) != 0) or ((a%100)== 0 and 
        (a/100)%4 == 0)) {
            if (d > 0 and d <= 29) return true;
            else return false;
        }
      else {
            if (d > 0 and d <= 28) return true;
            else return false;
        }
    }
    else return false;
}