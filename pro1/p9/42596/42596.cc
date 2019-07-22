#include <iostream>
#include <vector>
using namespace std;
 
typedef vector<vector<int> > Matrix;
 
void minmax(const Matrix& m, int& max, int& min){
    max = min = m[0][0];
    for(int i = 0; i < m.size(); ++i){ //(^)
        for(int j = 0; j < m[0].size(); ++j){ //<->
            if(m[i][j] > max) max = m[i][j];
            if(m[i][j] < min) min = m[i][j];
        }
    }
}
 
int main(){
    int r, c;
    int max, min, dif;
    max = min = 0;
 
    int number = 0;
    int maxnum = 0; //Maxdif will tell the maximum difference.
    dif = -1;
 
    while(cin >> r >> c){
        Matrix m(r,vector<int>(c));
        //We fill the matrix.
        for(int i = 0; i < r; ++i){ //(^)
            for(int j = 0; j < c; ++j){ //<->
                cin >> m[i][j];
            }
        }
 
        minmax(m, max, min);
        ++number;
 
        if(max-min > dif){
            dif = max-min;
            maxnum = number;
        }
    }
 
    cout << "la diferencia maxima es " << dif << endl;
    cout << "la primera matriu amb aquesta diferencia es la " << maxnum << endl;
 
}
 