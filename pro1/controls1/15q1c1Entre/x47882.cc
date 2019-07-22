#include <iostream>
using namespace std;

int main () {

    int num;
    while (cin >> num) {
        int x1, x2;
        cin >> x1;
        int total=0;
        for (int i=1; i<num; i++) {
            cin >> x2;
            if (x2%2==0) total=total+x1;
            x1=x2; 
        }
        cout << total << endl;
    }
}