#include <iostream>
using namespace std;

int main(){
    int n;
    double migpi = 0.0;
    double terme = 1.0;
    cin >> n;
    // Inv: migpi es la suma dels i-1 primers termes de la serie, 
    // i terme es l'i-essim terme de la serie 
    for (int i = 1; i <= n; ++i) {
       migpi = migpi + terme; 
       terme = terme*i/(2.0*i + 1.0);
     }
    cout << 2*migpi << endl;
}



