#include <iostream>
using namespace std;

int main () {
    string p1, p2, s1 = "", s2;
    int count = 0;
    cin >> p1 >> p2;
    while (cin >> s2) {
        if (s1.size() == p1.size() and s2.size() == p2.size()) count++;
        s1 = s2;
    }
    cout << count << endl;
}