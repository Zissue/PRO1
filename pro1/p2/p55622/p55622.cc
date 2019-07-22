#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;
  int o=n;
  int digit=1;

  while (n>=10) {
    n=n/10;
    ++digit;
  }
  cout << "El nombre de digits de " << o << " es " << digit  << "." << endl;
}
