#include <iostream>
#include <string>
using namespace std;

void write_rule(const string& s, int W) {
    int count = 0;
    for (int i = 1; i <= W; i++) {
        if (count == s.size()) count = 0;
        if (count < s.size()) {
            cout << s[count];
            count++;
        }
    }
}

int main() {
    string s; int W;
    while (cin >> s >> W) {
        write_rule(s, W);
        cout << endl;
    }
}