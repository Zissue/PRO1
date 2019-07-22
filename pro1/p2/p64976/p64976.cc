#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;
  int m=1;

  if (n==0) {
    cout << "";
  }

  else while (m<=n) {
    cout << n << " x " << m << " = " << n*m << endl;
    m++;
  }

  return 0;
}
