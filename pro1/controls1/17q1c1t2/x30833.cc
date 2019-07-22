#include <iostream>
using namespace std;

int main() {
	int x;
	char c;
	while (cin >> x >> c) {
		for (int i=0; i<x/2+1; ++i) {
            for (int k=0; k<2*i; k++) cout << " ";
			for (int j=0; j<x-2*i; ++j) {
				
                if (j != 0) cout << '.';
				cout << c;
			}
			cout << endl;
		}
	}
}
    