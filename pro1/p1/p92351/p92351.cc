#include <iostream>
using namespace std;

int main () {
  int a, b;
  cin >> a >> b;
  int d = a / b;
  int r = a % b;

  if(r<0) {
    d--;
    r = a % b + b;
  }

  cout << d << " " << r << endl;
  return 0;
}
