#include <iostream>
using namespace std;

int main () {
    int a, b, count = 0;
    cin >> a >> b;
    string s1, s2;
    cin >> s1;
    while (cin >> s2) {
        if (s1.size()%a == 0 and s2.size()%b == 0) count++;
        s1 = s2;
    }
    cout << count << endl;
}