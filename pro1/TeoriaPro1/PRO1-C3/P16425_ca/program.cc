#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<bool>prime(7919+1, true);
    for (int p = 2; p*p <= 7919; ++p) if (prime[p]) for (int i = p*2; i <= 7919; i += p) prime[i] = false;
    int n;
    while (cin >> n) {
    	cout << 2;
    	--n;
    	int i = 3;
    	while (i < prime.size() and n > 0) {
    		if (prime[i]) { cout << ',' << i; --n; }
    		++i;
    	}
    	cout << endl;
    }
}