#include <iostream>
using namespace std;

int main () {
    
    int a, b, c;
    int countIn=0;
    while (cin >> a >> b >> c) {
    
        int af, bf, cf;
        af=a%10;
        bf=b%10;
        cf=c%10;
    
        int ai=0,bi=0,ci=0;
    
        for (int tres=0; tres<3; tres++) {
            ai=a%10;
            bi=b%10;
            ci=c%10;
            a/=10;
            b/=10;
            c/=10;
        }
    
        if (ci>bi and bi>ai) {
            if (ai==af and bi==bf and ci==cf) countIn++;
        }
    }

    cout << "3-Increasing: " << countIn << endl;
}
