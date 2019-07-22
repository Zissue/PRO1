#include <iostream>
#include <string>
using namespace std;


//pre: i es un indice valido del vector x
//post: el resultado indica si x es y[i..i + x.size() - 1]
bool coincide(const string& x, const string& y, int i) {
    int n = x.size();
    int m = y.size();
    if (i + n > m) return false;
    for (int j = 0; j < n; ++j)
        if (x[j] != y[i + j]) return false;
    return true;
}
 
 
// Pre: --
// Post: el resultado indica si existe i tal que x == y[i..i + x.size() - 1]
bool es_substring(const string& x, const string& y) {
        int n = x.size();
        int m = y.size();
        int i = 0;
        while (i + n <= m and not coincide(x, y ,i)) ++i;
        return i + n <= m;
}



//pre: en canal de entrada hay un string primer, un numero k, y una secuencia de k palabras
//post: en salida, el numero de palabras de la secuencia para las que  primer es un substring
int main() {
    string primer;
    cin >> primer;
    int k;
    cin >> k;
    int count = 0;
    for (int i = 0; i < k; ++ i) {
        string pal;
        cin >> pal;
        if (es_substring(primer,pal)) ++count;
    }
    cout << count << endl;
}
