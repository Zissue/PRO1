#include <iostream>
using namespace std;
 
int operacion (){
    char z;
    cin >> z;
    if (z >= '0' and z <= '9') return z - '0';
    else {
        int x = operacion();
        int y = operacion();
        if (z == '+') return (x + y);
        else if (z == '-') return (x - y);
        else if (z == '*') return (x * y);
        return 0;
    }  
}
 
int main () {
    cout << operacion() << endl;
}