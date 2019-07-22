#include <iostream> 
#include <vector>
using namespace std;


//tipo tupla para representar una palabra y su frecuencia
struct PalFreq {
        string pal;
        int freq;
};



//almacena una palabra en v incrementando su frecuencia
//si ya estaba o incorporandola con frecuencia 1 si es nueva
void almacenar(vector<PalFreq>& v, string s) {
    PalFreq sfreq;
    sfreq.pal = s;
    sfreq.freq = 1;
    v.push_back(sfreq); // ponemos centinela para limitar busqueda
    int i  = 0;
    while (v[i].pal != s) ++i; //busqueda con exito asegurado ---centinela  !!---
    if (i != int(v.size()) - 1) {
        ++v[i].freq;
        v.pop_back(); //en este caso, eliminamos centinela
    }
    // si fuese i == int(v.size()) - 1 dejamos el centinela
    // en representacion de la palabra s, que es nueva en v
}



//retorna la posicion de la palabra con la frecuencia maxima en v 
int pos_max(const vector<PalFreq>& v) {
        int n = v.size();
        int max = v[0].freq;
        int pos = 0;
        for (int i = 1; i < n; ++i) {
            if (v[i].freq > max) {
                max = v[i].freq;
                pos = i;
            }
        }
        return pos;
}


//pre: en input hay un texto no vacio ---potencialmente ilimitado,
//     pero con un vocabulario (palabras diferentes) limitado---
//  
//post: escribe en output la palabra que mas veces se repite y su frecuencia. En
//      caso de empate, escribe la que aparece antes en el texto de entrada
int main() {
    vector<PalFreq> v;
    string s;
    while (cin >> s) 
        almacenar(v, s);
    int pos = pos_max(v);
    cout << v[pos].pal << ' '
         << v[pos].freq << endl;
}
    
