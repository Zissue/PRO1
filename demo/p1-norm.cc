#include <iostream>
#include <vector>
using namespace std;


//pre: una secuencia de numeros precedida por la longitud de la misma.
//     la longitud es mayor que 0
//post: la secuencia de entrada normalizada (restando el minimo a cada elemento
//      de la secuencia original)

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for (int i = 0; i < n; ++i) cin >> s[i];
    int min = s[0];
    for (int i = 1; i < n; ++i)
        if (s[i] < min) min = s[i];
    cout << s[0] - min;
    for (int i = 1; i < n; ++i)
        cout << ' ' <<  s[i] - min;
    cout << endl;
}
        
  
