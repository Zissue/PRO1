#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;
  int o=n;

  while (n>2) {
    if (n%2 == 0) {
      n=n/2;
      cout << "0";
    }

    if (n%2 != 0) {
      n=n/2;
      cout << "1";
    }

  }
  if (n==2) cout << "01" << endl;
  if (n==1) cout << "1" << endl;
  if (o==0) cout << "0" << endl;
  if (n==0 and o!=0) cout << "0" << n << endl;

}
