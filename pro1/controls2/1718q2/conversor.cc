#include <iostream>
using namespace std;

// Writes the representation of n in base b (n ≥ 0, 2 <= b <= 10)
// No digits are written when n = 0.
void write_base(int n, int b) {
    if (n > 0) {
        write_base(n/b, b);
        cout << n%b;
    }
}
// Input: read two numbers, n and b, with n ≥ 0 and 2 <= b <= 10
// Output: write the representation of n in base b.
int main() {
    int n, b;
    cin >> n >> b;
    if (n == 0) cout << "0";
    else write_base(n, b);
    cout << endl;
}
