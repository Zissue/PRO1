#include <iostream>
#include <cmath>
using namespace std;

int main() {
  cout.setf(ios::fixed);
  cout.precision(2);

  double n, x;
  double sum1=0.0, sum2=0.0;
  cin >> n;

  while (cin >> x) {
    sum1=sum1+pow(x,2.0);
    sum2=sum2+x;
  }

  double r;
  r=((1.0/(n-1.0))*sum1)-((1.0/n*(n-1.0))*pow(sum2,2.0));

  cout << r  << " " << sum1 << " " << sum2 << endl;
}
