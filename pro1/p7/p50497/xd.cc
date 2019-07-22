#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool es_palindrom(const string& s) {
    bool pal = false;
    int size = s.size();
    if (size%2 == 0) {
        for (int i = 0; i < (size/2)-1; i++) {
            if (s[i] == s[size-1-i]) pal = true;
        }
    }
    else {
        for (int i = 0; i < )
    }
    return pal;
}

int main () {

}