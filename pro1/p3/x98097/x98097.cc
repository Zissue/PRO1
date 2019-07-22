#include<iostream>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  int count = 0;
  int r;
  int senar = 0;
  int parell = 0;
  while (n > 0) {
    r = n%10;
    n = n/10;
    ++count;
    if ((count % 2) == 0) {
      parell = parell + r;
    }
    else senar = senar + r;
  }
  cout << senar << " " << parell << endl;


  if (parell == 0 or senar == 0) {
    cout << "0 = ";
    if (senar >= parell) {
      cout << parell << " * " << senar << endl;
    }
    if (parell >= senar) {
      cout << senar << " * " << parell << endl;
    }
  }
  else if (senar >= parell) {
    if ((senar % parell) == 0) {
      cout << senar << " = " << senar/parell << " * " << parell << endl;
    }
    else cout << "res" << endl;
  }
  else if (parell >= senar) {
    if ((parell % senar) == 0) {
      cout << parell << " = " << parell/senar << " * " << senar << endl;
    }
    else cout << "res" << endl;
  }
}