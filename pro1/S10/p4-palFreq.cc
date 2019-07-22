#include <iostream> 
#include <algorithm>
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



//pre:---
//post: retorna true sii p es anterior a q en el orden de interes
bool comp(PalFreq p, PalFreq q) {
    if (p.freq > q. freq) return true;
    else if (p.freq == q. freq and p.pal < q.pal) return true;
    return false;
}


//pre:---
//post: escribe en canal de salida el vector v
void escribir(const vector<PalFreq>& v) {
    int n = v.size();
    for (int i = 0; i < n; ++i) 
        cout << v[i].pal << ' ' << v[i].freq << endl;
}


//pre: en input hay un texto no vacio ---potencialmente ilimitado,
//     pero con un vocabulario (palabras diferentes) limitado---
//  
//post: escribe en output cada palabra distinta del texto con su frecuencia.
//      Aparecen primero las palabras mas frecuentes. En caso de que dos
//      palabras tengan la misma frecuencia se escribe primero la que es 
//      anterior alfabetivamente
//     
int main() {
    vector<PalFreq> v;
    string s;
    while (cin >> s) 
        almacenar(v, s);
    sort(v.begin(), v.end(), comp);
    escribir(v);
}
    