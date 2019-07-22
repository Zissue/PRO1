#include <iostream>
using namespace std;

int main () {
    
    char c;
    int count=0;
    while (cin >> c) {
        
        if (c=='a') count++;
    }
    if (c=='.') cout << count << endl;
}
