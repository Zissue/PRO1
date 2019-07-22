#include <iostream>
#include <vector>
using namespace std;


struct Baldosa {
    int reward;
    char next;
};


typedef vector<Baldosa> Fila;
typedef vector<Fila> Room;


typedef vector< vector<bool> > Testigo;

//pre: n, m son mayores que cero
//post: retorna una Room m x n leida por filas del input
Room leer_room(int m, int n) {
    Room room(m, Fila(n));
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j) 
            cin >> room[i][j].reward >> room[i][j].next;
    return room;
}

    

// en input hay dos numeros m y n, una  matriz m x n de baldosas que representa una room,
// y una posicion inicial i, j en la room.
//
// en output escribimos el reward acumulado hasta la salida de la room por un robot que ha iniciado su trayecto
// en la posicion i, j y ha seguido la direccion de cada baldosa. Si el robot queda atrapado
// en la room para siempre, lo indicamos  con un mensaje
int main() {
    int m, n;
    cin >> m >> n;
    Room room = leer_room(m, n);
    Testigo witness(m, vector<bool>(n,false)); //testigo de baldosas ya visitadas
    int i, j;
    cin >> i >> j;//posicion inicial
    int acumulado = 0;
    while (i >= 0 and i < m and j >= 0 and j < n and not witness[i][j]) {
        witness[i][j] = true;
        acumulado = acumulado + room[i][j].reward;
        if (room[i][j].next == 'N') --i;
        else if (room[i][j].next == 'E') ++j;
        else if (room[i][j].next == 'W') --j;
        else ++i;
    }
    if (i < 0 or i >=  m or j < 0 or j > n) cout << acumulado;
    else cout << "atrapado forever";
    cout << endl;
}
        
    
    
    

    

    