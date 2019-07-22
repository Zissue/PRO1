#include <iostream>
using namespace std;

int main () {

    string j1, j2;
    cin >> j1 >> j2;
    int count1=0, count2=0;
    int empat=0;
    
    char c1, c2;
    while (cin >> c1 >> c2) {
        if (c1=='P') {
            if (c2=='T') count2++;
            if (c2=='P') empat++;
            if (c2=='R') count1++;
        }
        if (c1=='T') {
            if (c2=='R') count2++;
            if (c2=='T') empat++;
            if (c2=='P') count1++;
        }
        if (c1=='R') {
            if (c2=='P') count2++;
            if (c2=='R') empat++;
            if (c2=='T') count1++;
        }
    }
    cout << j1 << " " << count1 << endl;
        cout << j2 << " " << count2 << endl;
        cout << "Ties" << " " << empat << endl;
        cout << "Total" << " " << empat+count1+count2 << endl;
}