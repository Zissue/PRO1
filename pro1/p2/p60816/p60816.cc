#include <iostream>
using namespace std;

int main() {

  int a;
  cin >> a;

  int n=a;

  if (n>0) {
    while (n > 0){
      if (n%16 < 10) cout << n%16;
      else cout << char('A' + n%16 - 10);
      n=n/16;
    }
  }
  else cout << "0";
  cout << endl;

}
