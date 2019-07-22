#include <iostream>
using namespace std;

int main () {
    
    int n;
    cin >> n;
    
    int n1=n;
    int count=0;
    
    cout << "nombres que acaben igual que " << n1 << ":" << endl;
     
        while (cin >> n) {
            if (n%1000 == n1%1000) {
                count++;
                cout << n << endl;
            }
        }
    cout << "total: " << count << endl;
}
