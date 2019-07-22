#include <iostream>
#include <vector>
using namespace std;

const int MAX = 1000000;

void garbell(const int a, const int b) {
    vector<bool> v(a+1,true);
    v[0] = v[1] = false;
    for (int i = 2; i*i <= a; i++)
        if (v[i]) 
            for (int j = i*i; j <= a; j += i) 
                v[j] = false;
    
    int count = 1;
    bool first = true;

    for (int i = 0; i <= a and count <= b; i++)
        if (v[i]) {
            if (first) {
                first = false;
                cout << i;
            }
            else cout << "," << i;
            count++;
        }
    cout << endl;
}

int main () {
    int n;
    while (cin >> n) {
        garbell(MAX, n);
    }
}