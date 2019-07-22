#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;
  if (n>=100) {

  cout << n%10 + (n/10)%10 + (n/100)%10 << endl;
 }
 else cout << "n<100" << endl;
}
