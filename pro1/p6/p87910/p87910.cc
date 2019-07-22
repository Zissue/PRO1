#include <iostream>
using namespace std;

void morse(char c, int& n) {
    if (c == 'a') {
        cout << ".-";
        n += 2;
    }
    else if (c == 'e') {
        cout << ".";
        n += 1;
    }
    else if (c == 'i') {
        cout << "..";
        n += 2;
    }
    else if (c == 'o') {
        cout << "---";
        n += 3;
    }
    else if (c == 'u') {
        cout << "..-";
        n += 3;
    }
}

int main () {
    int n, i = 0;
    char c;
    cin >> n;
    while (cin >> c) {
        morse(c,i);
        if (i >= n) {
            i = 0;
            cout << endl;
        }
    }
    if (i != 0) cout << endl;
    cout << "STOP" << endl;
}