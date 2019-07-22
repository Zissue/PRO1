#include <iostream>
using namespace std;
 
int main(){
  int x;
  bool primer = true;
  while(cin >> x) {
        if (not primer) cout << endl;
        for(int i = 0; i < x-1; i++){
      for(int j = 0; j < i; j++) cout << ' ';
      for(int j = 0; j < (2*x - 1)-2*i; j++) cout << 'X';
      cout << endl;
    }
    // parte del medio;
    for(int i = 0; i < x-1; i++) cout <<' ';
    cout << 'X' << endl;
   
    for (int i = 0; i < x-1; i++) {
     for( int j = x-2; j > i; j--) cout << ' ';
     for(int j = 0; j < 3+(2*i); j++) cout << 'X';
       cout << endl;
    }
    primer  = false;
  }
}