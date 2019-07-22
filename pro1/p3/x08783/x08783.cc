#include <iostream>
using namespace std;

int main() {

  int b, n;
  while (cin >> b >> n) {
    int i=0;
    while (n>0) {
      n=n/b;
      i++;
    }
    cout << i << endl;

  }

}
