#include <iostream>
using namespace std;

int main () {

    int i, r, x;
    cin >> i >> r;

    int t=0, count=0;
    while (cin >> x) {
        if (x>=i and x<=r) t=t+x;
        else count++; 
    }

    cout << "Sum Inside: " << t << endl;
    cout << "Num Outside: " << count << endl;
}