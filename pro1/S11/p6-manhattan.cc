#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Punt {
    int x, y;
};


//el atributo d se usa para almacenar la distancia a la referencia
struct Manhattan {
    Punt p;
    int d;
};


//funcion comp para usar en el sort
bool comp(Manhattan a, Manhattan b) {
    if (a.d == b.d) {
        if (a.p.x == b.p.x) return a.p.y <= b.p.y;
        else return a.p.x < b.p.x;
    }
    else return a.d < b.d;
}


// retorna el valor aabsoluto de a
int valor_absoluto(int a) {
    if (a < 0) return -a;
    return a;
}


//retorna la distancia manhattan de los puntos p y q
int distanciaM(Punt p, Punt q) {
    return valor_absoluto(p.x - q.x) + valor_absoluto(p.y - q.y);
}


    
//construye el vector manhattan a partir de un vector de puntos
vector<Manhattan> vector_manhattan(const vector<Punt>& v, const Punt& a) {
    int n = v.size();
    vector<Manhattan> result(n);
    for (int i = 0; i < n; ++i) {
        result[i].p = v[i];
        result[i].d = distanciaM(v[i], a);
    }
    return result;
}


//programa solucion de P64555 //Manhattan distance
int main() {
    Punt gros;
    cin >> gros.x >> gros.y;
    int n;
    cin >> n;
    vector<Punt> vpuntos(n);
    for (int i = 0; i < n; ++i) 
        cin >> vpuntos[i].x >> vpuntos[i].y;
    vector<Manhattan> vmanhattan = vector_manhattan(vpuntos, gros);
    sort (vmanhattan.begin(), vmanhattan.end(), comp);
    int distancia_actual = 0;
    bool primero = true;
    int i = 0;
    while (i < n) {
         if (vmanhattan[i].d == distancia_actual) {
             if (primero) {
                cout << "punts a distancia " << distancia_actual << endl;
                primero = false;
             }
             cout << vmanhattan[i].p.x << ' ' << vmanhattan[i].p.y << endl;
             ++i;
         }
          else {
              distancia_actual = vmanhattan[i].d;
              primero = true;
              
        }
    }
}