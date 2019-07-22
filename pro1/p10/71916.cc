#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        vector<char> abc(26,0);
        char c;
        while (cin >> c and c != '.') 
            if (c >= 'A' and c <= 'Z') ++abc[c-'A'];
        while (cin >> c and c != '.') 
            if (c >= 'A' and c <= 'Z') --abc[c-'A'];
        bool found = false;
        for (int j = 0; j < 26 and !found; j++) if (abc[j] != 0) found = true;
        if (!found) cout << "SI";
        else cout << "NO";
        cout << endl;
    }
}