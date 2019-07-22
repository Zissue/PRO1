#include <iostream>
using namespace std;

int main() {
  cout.setf(ios::fixed);
  cout.precision(4);
  int n;
  cin >> n;

  double count=0;
  double r=0;

  while (count<n) {
    ++count;
    r=r+(1/count);
  }

  cout << r << endl;
}
