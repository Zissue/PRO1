#include <iostream>
using namespace std;

int main () {
    bool found = false;
    int n, count = 0;
    while (cin >> n and !found) {
        count++;
        if (n%2 == 0) found = true;
    }
    cout << count << endl;
}