#include <iostream>
using namespace std;

int main() {

  int x, y;
  cin >> x >> y;
  int n;

  if (x>y) {
    n=x;
    while (n>=y) {
      cout << n << endl;
      --n;
    }
  }

  if (x<y) {
    n=y;
    while (n>=x) {
      cout << n << endl;
      --n;
    }
  }

  if (x==y) cout << x<< endl;
}
