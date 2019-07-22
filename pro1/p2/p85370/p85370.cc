#include <iostream>
#include <cmath>

using namespace std;

int main() {
  cout.setf(ios::fixed);
  cout.precision(4);

  double c, i, t;
  string sc;

  cin >> c >> i >> t >> sc;

  if (sc == "simple") {
    c=c+c*i/100*t;
    cout << c;
  }

  if (sc == "compost") {
    c=c*pow(1+(i/100),t);
    cout << c;
  }

cout << endl;
}
