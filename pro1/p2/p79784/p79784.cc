#include <iostream>
using namespace std;

int main() {

    int x=0,y=0;
    char coord;
    while (cin >> coord) {

        if (coord =='n') {
        y--;
        }
        if (coord =='s') {
        y++;    
        }
        if (coord =='e') {
        x++;    
        }
        if (coord =='o') {
        x--;    
        }
    }
    cout << "(" << x << ", " << y << ")" << endl;
}