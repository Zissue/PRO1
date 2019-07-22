#include <iostream>
using namespace std;


// Versio recursiva
// Pre: y >= 0
// Post: retorna x*y
int prod(int x, int y) {
    if (y == 0) return 0;
    if (y%2 == 0) return prod(x*2,y/2);
    return prod(x,y - 1) + x;
}

/*
// Versio iterativa
// Pre: y >= 0
// Post: retorna x*y
int prod(int x, int y) {
   int p = 0;
   // Inv: X*Y = p + x*y on X, Y son els valors inicials de x, y 
   while (y != 0) {
       if (y%2 == 0) {  
             x = x*2; 
             y = y/2;
       } 
       else {
             p = p + x; 
             y = y - 1;
       }
   }
   return p;
}
*/

int main() {
   int x,y;
   while (cin >> x) {
      cin >> y;
      cout << prod(x,y) << endl;
   }
}

