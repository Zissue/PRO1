#include <iostream>
using namespace std;

int main () {

	int n, m;
	bool primera=true;
	while (cin >> n >> m) {
		if (primera) primera=false;
		else cout << endl;
		int r=(n+m)%5;
		for (int f=0; f<n; f++) {
			for (int c=0;c<m;c++) {
				cout << r;
			}
			cout << endl;
		}

	}


}