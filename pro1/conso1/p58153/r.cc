#include <iostream>
using namespace std;
 
int main(){
        cout.setf(ios::fixed);
        cout.precision(10);
        double x, y;
       
        while (cin >> x) {
                cin >> y;
                double res = 0;
                double res2 = 0;
                if (x == 0) res = 0;
                if (y == 0) res2 = 0;
            if (x != 0) {
                        for (double i = 1; i <= x; ++i){       
                                res = res + (1/i);
                        }
                }
                if (y != 0) {
                for (double j = 1; j <= y; ++j){       
                        res2 = res2 + (1/j);
                        }
                }      
                cout << res - res2 << endl;    
        }
}
