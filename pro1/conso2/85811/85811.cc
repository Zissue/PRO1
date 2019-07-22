#include <iostream>
#include <vector>
using namespace std;

void readVector(vector<int>& v) {
    for (int i = 0; i < v.size(); i++) cin >> v[i];
}

void writeVector(vector<int>& v) {
    bool first = true; bool last = false;
    
    for (int i = 1; i < v.size(); i++) { 
        if (!last) {
            if (first) {
                cout << v[i/2];
                first = !first;
            }   
            else cout << ' ' << v[i/2];
            last = !last;
        }
        else {
            cout << ' ' << v[v.size()-(i/2)-1];
            last = !last;
        }
    }
    cout << endl;
}

int main () {
    int n;
    while (cin >> n) {
        vector<int> v(n);
        readVector(v);
        writeVector(v);
    }
}