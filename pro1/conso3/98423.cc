#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n, m;
    cin >> n >> m;

    int posX, posY;
    cin >> posX >> posY;
    cout << "(" << posX << ", " << posY << ")" << endl;

    string s;
    while (s != "-1" and  cin >> s) {
        if (s == "right" or s == "left" or s == "up" or s == "down") {
            if (s == "right") {
                posY++;
            }
            else if (s == "left") {
                posY--;
            }
            else if (s == "up") {
                posX--;
            }
            else if (s == "down") {
                posX++;
            }
            if (posX > n or posY > m or posX < 1 or posY < 1) {
                cout << "out of bounds" << endl;
                s = "-1";
            }
            else cout << "(" << posX << ", " << posY << ")" << endl;
        }
        else {
            cout << "incorrect order" << endl;
            s = "-1";
        }
    }
}