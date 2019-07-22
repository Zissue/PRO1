#include <iostream>
using namespace std;

int main () {

    int f, c;
    cin >> f >> c;
    int r=0;
    for (int i=0 ; i<f ;i++) {
        for (int j=0; j<c ; j++) {
            char x;
            cin >> x;
            r=r+(x-'0');
        }
    }
    cout << r << endl;
}