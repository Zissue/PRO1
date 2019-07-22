#include <iostream>
using namespace std;

int main () {

    int n;
    int count=0;
    while(cin >> n) {
        count++;
        if (n%2==0 and count%3==0) cout << n << endl;
    }
}