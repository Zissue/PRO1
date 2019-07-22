#include <iostream>
#include <vector>
using namespace std;


bool inc(string& s1, string& s2) {
    if (s2.size() > s1.size()) return false;
    if (s2.size() == s1.size()) return s2 == s1;
    for (int i = 0; i < s1.size() - s2.size() + 1; i++) {
        if (s1[i] == s2[0]) {
            bool found = true;
            for (int j = 1; j < s2.size() and found; j++) found = s1[i+j] == s2[j];
            if (found) return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int i = 0; i < n; i++) {
        cout << v[i] << ':';
        for (int j = 0; j < n; j++) if (inc(v[i], v[j])) cout << ' ' << v[j];
        cout << endl;
    }
}