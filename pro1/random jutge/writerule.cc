#include <iostream>
#include <string>
using namespace std;

void write_rule(const string& s, int W) {
    int size = s.size();
    for (int i = 0; i < W; i += size) {
    	if (i+size <= W) cout << s;
    }
}

int main() {
    string s; int W;
    while (cin >> s >> W) {
        write_rule(s, W);
        cout << endl;
    }
}