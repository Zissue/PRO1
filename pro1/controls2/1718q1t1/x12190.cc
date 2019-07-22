#include <iostream>
using namespace std;

/*int digital_sum(int a, int b) {
	if (a == 0 and b == 0) return 0;
	else return (a%10+b%10)%10+ 10*digital_sum(a/10,b/10);
}*/

int digital_sum(int a, int b) {
    if (a == 0 and b == 0) return 0;
    else return (a%10+b%10)%10+ 10*digital_sum(a/10,b/10);
}

int main () {
    int a, b;
    while (cin >> a >> b) {
        cout << digital_sum(a,b) << endl;
    }
}