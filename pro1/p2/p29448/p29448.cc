#include <iostream>
using namespace std;

int main() {

  int d, m, n;

  while (cin >> d >> m >> n) {
  if (d>0 and m>0 and n>0 and n>=1800 and n<=9999) {


    if (m==2) {
      if ((n%4 == 0 and n%100 != 0) or (n%4 == 0 and (n/100)%4 == 0 )) {
        if (d>0 and d<=29) cout << "Data Correcta";
        else cout << "Data Incorrecta";
      }
      else if (d>0 and d<=28) cout << "Data Correcta";
           else cout << "Data Incorrecta";
    }


    if (m!=2 and m<=12) {

      if (m>=1 and m<=7) {
        if (m%2==1 and d<=31) cout << "Data Correcta";
        else if (m%2==0 and d<=30) cout << "Data Correcta";
             else cout << "Data Incorrecta";
        }

      if (m>7 and m<=12) {
        if (m%2==1 and d<=30) cout << "Data Correcta";
        else if (m%2==0 and d<=31) cout << "Data Correcta";
             else cout << "Data Incorrecta";
      }

    }

  }
  else cout << "Data Incorrecta";
  cout << endl;
}
}
