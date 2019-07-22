#include <iostream>
using namespace std;

int mp(int a, int b) {
    int x;
    if (a%b == 0) x = a;
    else x = (a/b)*b + b;
    return x;
}

int main () {
    int a, b;
    int count = 0;

    while (cin >> a >> b) {
        count++;
        cout << "#" << count << " : " << mp(a,b) << endl;  
    }
}