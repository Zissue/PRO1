#include <iostream>
#include <cmath>
using namespace std;

int main() {

  int k;
  cin >> k;
  int b=2;
  int x=1;

  while (b<=16) {
    while (k>=pow(b,x)){
      x++;
    }

    cout << "Base " << b << ": " << x << " cifras." << endl;
    x=1;
    b++;
  }

}
