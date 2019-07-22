#include <iostream>
using namespace std;

int main () {

    int x, y, z;
    int count=0;
    while (cin >> x >> y >> z) {

        if (x%2==0 and y%2==0 and z%2==0) {
            count++;
        }
        else if (x%3!=0 or y%3!=0 or z%3!=0) {
            count++;
        }
    }
    cout << count << endl;
}
