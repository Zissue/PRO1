#include <iostream>
using namespace std;

int binary2octal(int n) {
    if (n == 0) return 0;
    int d3 = n%1000;
    int x = d3%10 + 2*((d3/10)%10) + 4*((d3/100)%10);
    return 10 * binary2octal(n/1000) + x;
}

int main(){
    int n;
    while (cin >> n){
        cout  << n << " is equivalent to " << binary2octal(n);
        cout  << " in base 8" << endl;
    }    
}