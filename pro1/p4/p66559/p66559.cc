#include <iostream>
using namespace std;
 
void espais(int n){
        if (n > 0){
                cout << " ";
                espais(n-1);
        }
}
 
void escriu_triangle(int t){
        for (int i = 1; i <= t*2; ++i){
                espais(t*2 - i);
                if (i%2 == 1){
                        for (int x = 1; x <= i/2 + 1; ++x){
                                if (x != 1) cout << "  ";
                                cout << "/" << char(92);
                        }
                }
                else{
                        for(int x = 1; x <= i/2; ++x){
                                cout << "/__" << char(92);
                        }
                }
                cout << endl;
        }
        cout << endl;
}
 
int main() {
        int t;
        while (cin >> t and t > 0){
                escriu_triangle(t);
        }
}