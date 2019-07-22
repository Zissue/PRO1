#include <iostream>
using namespace std;

int main() {

  int a, b;
  int r=1;

  while (cin >> a >> b) {
    if (b==0) cout << "1" << endl;
    else {
      while (b>0) {
        r=r*a;
        b--;
      }
      cout << r << endl;
      r=1;
    }

  }
}
