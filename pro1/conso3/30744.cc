#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<bool> > Matrix;

int main () {
    int n, m;
    cin >> n >> m;
    Matrix robot(n+1, vector<bool> (m+1,false));

    int posX, posY, posX2, posY2;
    cin >> posX >> posY;
    cout << "(" << posX << ", " << posY << ")" << endl;

    string s;
    while (s != "-1" and  cin >> s) {

        posX2 = posX;
        posY2 = posY;
        robot[posX2][posY2] = true;

        if (s == "right" or s == "left" or s == "up" or s == "down") {
            if (s == "right")     posY++;
            else if (s == "left") posY--;
            else if (s == "up")   posX--;
            else if (s == "down") posX++;

            if (posX > n or posY > m or posX < 1 or posY < 1) {
                cout << "out of bounds" << endl;
                s = "-1";
            }
            else if (robot[posX][posY] == true) {
                cout << "repeated position" << endl;
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