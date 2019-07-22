#include <iostream>
#include <vector>
using namespace std;

bool is_palindromic(int n) {
	int n1, n2;
	n1 = n;
	n2 = 0;
	while (n1 > 0) {
		n2 = n2*10 + n1%10;
		n1 = n1/10;
	}
	return n == n2;
}

int main() {
    vector<bool>prime(9817189+1, true);
    for (int p = 2; p*p <= 9817189; ++p) if (prime[p]) for (int i = p*2; i <= 9817189; i += p) prime[i] = false;
    vector<int> prime_pal_nums;
    for (int i = 2; prime_pal_nums.size() < 750; ++i) if (prime[i] and is_palindromic(i)) prime_pal_nums.push_back(i);
    int i;
    while (cin >> i) cout << prime_pal_nums[i-1] << endl;
}