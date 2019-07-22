#include <iostream>
using namespace std;

int main () {

    int n;
    string s;
    cin >> n;
    int count=0;
    while (cin >> s) {
        count++;
        if (count%n==0) cout << s << endl;
    }
}
