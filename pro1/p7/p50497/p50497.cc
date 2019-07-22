#include <iostream>
#include <string>
using namespace std;

bool es_palindrom(const string& s) {
    int size = s.length();
    for (int i = 0; i < size/2; i++) {
        if (s[i] != s[size-1-i]) return false;
    }
    return true;
}
