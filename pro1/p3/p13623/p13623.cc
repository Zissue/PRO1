#include <iostream>
using namespace std;

int main () {
    
    int f, c;
    cin >> f >> c;
    int tot=0;
    
    for (int countf = 0 ; countf < f; countf++) {
        
        for (int countc = 0; countc<c; countc++) {
            char x;
            cin >> x;
            if ((countf%2==0 and countc%2==0) or (countf%2!=0 and countc%2!=0))
                tot=tot+(x -'0');
            }
            
        }
        cout << tot << endl;
    }
    //cout << r << endl;
