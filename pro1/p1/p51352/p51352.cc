#include <iostream>
using namespace std;

int main() {
  string e1, e2;
  cin >> e1 >> e2;

  if (e1 == "A" and e2 == "P") cout << "1" << endl;
  if (e1 == "P" and e2 == "V") cout << "1" << endl;
  if (e1 == "V" and e2 == "A") cout << "1" << endl;

  if (e1 == "P" and e2 == "A") cout << "2" << endl;
  if (e1 == "V" and e2 == "P") cout << "2" << endl;
  if (e1 == "A" and e2 == "V") cout << "2" << endl;

  if (e1 == e2) cout << "-" << endl;

}
