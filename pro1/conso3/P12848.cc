#include <iostream>
#include <vector>
using namespace std;

int reverse(int n) {
    if (n < 10) return n;
    else {
        int aux = 0;
        while (n != 0) {
            aux = aux*10 + n%10;
            n = n/10;    
        }
        return aux;
    }   
}

bool es_primer(const int& n) {
    if (n <= 1) return false;
    for (int i = 2; i*i <= n; ++i) if (n%i == 0) return false;
    return true;
}

bool es_pal(const int& n) {
    return (n == reverse(n));
}

int main () {
    vector<int> v(751,0);
    int count = 0;
    v[0] = v[751] = -1;
    int num = 0;
    while (count <= 750) {
        if (es_pal(num) and es_primer(num)) {
            count++;
            v[count] = num;
        }
        num++;
    }
    int n;
    while (cin >> n and n <= 750) {
        cout << v[n] << endl;
    }
}