#include <iostream>
using namespace std;

int main () {

    int n;

    while (cin >> n) {
        int ce=n-1;
        int cx=n;
        for (int f=n-1; f!=0; f--) {
            for (int e=ce; e!=0; e--) cout << " ";
            for (int x=cx; x!=0; x--) cout << "X";
            cout << endl;
            cx=cx+2;
            ce--;
        }
        
        for (int f=n; f!=0 ; f--) {
            for (int x=cx; x!=0; x--) cout << "X";
            cout << endl;
        }

        ce=1;
        cx=cx-2;
        for (int f=n-1; f!=0; f--) {
            for (int e=ce; e!=0; e--) cout << " ";
            for (int x=cx; x!=0; x--) cout << "X";
            cout << endl;
            cx=cx-2;
            ce++; 
        }
        cout << endl;
    }

}