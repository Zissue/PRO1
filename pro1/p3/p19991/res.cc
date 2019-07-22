#include <iostream>

using namespace std;

int main() {

  int n;
  cin >> n;

  char x;

  int d1 = 0;
  int d2 = 0;
  int sum = 0;

  for (int f = 0; f < n; f++) {

    for (int c = 0; c < n; c++) {

      cin >> x;

      if (f == c) {
        d1 = d1 + (x - '0');
      }
      if ((n-(f) == (c+1))) {
        d2 = d2 + (x - '0');
      }
      if (n % 2 != 0 and f == (n / 2) and c == (n / 2)) {
        d2 = d2 - (x - '0');
      }
    }
  }

  sum = d1 + d2;
  cout << sum << endl;
}
