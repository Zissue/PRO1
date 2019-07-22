#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Amigo {
  string persona;
  int dinero;
};

bool comp1(Amigo a, Amigo b) {
  return a.persona < b.persona;
}

bool comp2 (Amigo a, Amigo b) {
  if (a.dinero == b.dinero) return a.persona < b.persona;
  else return a.dinero < b.dinero;
}

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    int m;
    cin >> m;
    vector<Amigo> v(2*m);
    for (int i = 0; i < m; ++i) {
      string p1, p2;
      int d;
      cin >> p1 >> p2 >> d;
      v[2*i].persona = p1;
      v[2*i].dinero = -d;
      v[2*i + 1].persona = p2; 
      v[2*i + 1].dinero = d;
    }
    sort (v.begin(), v.end(), comp1);
    vector <Amigo> r(m);
    for (int i = 0; i < m; ++i) {
      r[i].persona = v[2*i].persona;
      r[i].dinero = v[2*i].dinero + v[2*i + 1].dinero;
    }
    sort (r.begin(), r.end(), comp2);
    for (int i = 0; i < m; ++i) cout << r[i].persona << ' ' << r[i].dinero << endl;
    cout << endl;
  }
}