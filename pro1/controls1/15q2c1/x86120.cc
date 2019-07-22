#include <iostream>
using namespace std;

int main () {
    
    int count=0;
    string s;
    
    while (cin >> s) {
        if (s != "STOP") count++;
        else {
            cout << count << endl;
            count=0;
        }
    }
}