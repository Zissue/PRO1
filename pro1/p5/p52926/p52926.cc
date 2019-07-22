#include <iostream>
using namespace std;

void reverse() {
    string s;
    cin >> s;
    if (s != "fi") {
        reverse ();
        cout << s << endl;
    }
}

int main () {
    reverse();
}
