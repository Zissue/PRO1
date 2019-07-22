#include <iostream>
using namespace std;

int main () {

  int d, n, t, a, count;
  cin >> d >> n >> t;

  for (int i=0; i<t ; i++) {
    cin >> a;
    if (n+a-d>0) count++;
    n=n+a-d;
  }
  cout << count << endl;
}
