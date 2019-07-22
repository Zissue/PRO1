#include <iostream>
using namespace std;

int main () {
        int n;
        int s=0, e=0;
        int d=n-1;
        char x;
        cin >> n;

        for (int f=0; f<n; ++f) {
                for (int c=0; c<n; ++c) {
                        cin >> x;
                        if (c==e or c==d) s=s+(x-'0');
                }
                ++e;
                --d;
        }
        cout << s << endl;
}
