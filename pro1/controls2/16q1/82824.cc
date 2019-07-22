#include <iostream>
using namespace std;

int main () {
    char c;
    while (c != '#') {
        cin >> c;
        if (c >= 'a' and c <= 'z') {
            c = 'A' + (c - 'a');
        }
        if (c >= 'A' and c <= 'Z')
        cout << char('Z'- (c - 'A'));
    }
    cout << "#" << endl;
}