#include<iostream>
#include<string>
using namespace std;

int main() {
        cout. setf ( ios :: fixed );
        cout. precision (4);
        double i;
        string ts;
        cin >> i >> ts;
        double t;
        if (ts == "setmanal") {
                t = 52;
                double a;
                a = 1 + (i/100)/t;
                double b = 0;
                ++b;
                double l;
                l = a;
                while (b < t) {
                        l = l * a;
                        ++b;
                }
                double tae;
                tae = (l - 1) * 100;
                cout << tae << endl;
        }
        if (ts == "mensual") {
                t = 12;
                double a;
                a = 1 + (i/100)/t;
                double b = 0;
                ++b;
                double l;
                l = a;
                while (b < t) {
                        l = l * a;
                        ++b;
                }
                double tae;
                tae = (l - 1) * 100;
                cout << tae << endl;
        }
        if (ts == "trimestral") {
                t = 4;
                double a;
                a = 1 + (i/100)/t;
                double b = 0;
                ++b;
                double l;
                l = a;
                while (b < t) {
                        l = l * a;
                        ++b;
                }
                double tae;
                tae = (l - 1) * 100;
                cout << tae << endl;
        }
        if (ts == "semestral") {
                t = 2;
                double a;
                a = 1 + (i/100)/t;
                double b = 0;
                ++b;
                double l;
                l = a;
                while (b < t) {
                        l = l * a;
                        ++b;
                }
                double tae;
                tae = (l - 1) * 100;
                cout << tae << endl;
        }
}
