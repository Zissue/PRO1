#include <iostream>
using namespace std;

int digit_comp(int d, int x, int y) {
	int dx = x%10;
	int dy = y%10;
	if ((dx == dy and dx == d) or x == 0) return 0;
	if (dx == d) {
		if (dy == d) return 0; //Iguals
		else return 1;
	}
	else if (dy == d) return 2;
	return digit_comp(d,x/10,y/10);
}

/*int digit_comp(int d, int x, int y) {
    if (x < 10) {
        if (x == d) return 1;
        else if (y == d) return 2;
        else return 0;
    }
    else return digit_comp(d,(x/10), (y/10));
}
*/
int main() {
    int d, x, y;
    while (cin >> d >> x >> y) {
        cout << digit_comp(d, x, y) << endl;
    }
}