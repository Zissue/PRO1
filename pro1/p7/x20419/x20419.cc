#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*char lletra_mes_frequent(const string& s) {

}*/

const int LONG_ALFABET = 'z' - 'a' + 1;

int main () {
    cout.setf(ios::fixed);
    cout.precision(2);
    
    int n;
    cin >> n;
    double m = 0;
    string s;
    vector<string> v[n];

    for (int i = 0; i < n; i++) {
        cin >> s;
        m = m + s.size();
        v[i] = s;
    }
    cout << m/n << endl;



}