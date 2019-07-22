#include <iostream>
using namespace std;

int main () {
	
	int n;

	while (cin >> n) {
		int count=0;
		while (n!=1) {
			if (n%2 == 0) {
				n=n/2;
				count++;
			}
			else {
				n=n*3;
				n++;
				count++;
			}
		}
	cout << count << endl;
	}
}