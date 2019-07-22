#include <iostream>
using namespace std;

int main(){
  
        int b, n;
        cin >> b;

        while (cin >> n) {
                int suma = 0;
                cout << n << ": ";
                while (n > 0){
                        suma = suma + n%b;
                        n = n/b;
                }
                cout << suma << endl;
        }
}
