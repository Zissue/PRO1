#include <iostream>
using namespace std;

int main () {

    int n;
    cin >> n;
    int no=n;
    int xf=0, r;
    for (int i=n ; i!=0 ; i=i/10) xf++;

    for (int j=1; j<=xf ;j++) {
        if (j%2!=0) r=r+(n%10);
        n/=10;
    }

    if (r%2==0) cout << no << " ES TXATXI" << endl;
    else cout << no << " NO ES TXATXI" << endl;
}