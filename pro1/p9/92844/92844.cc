#include <iostream>
#include <vector>
using namespace std;
 
typedef vector<char> Row;
typedef vector<Row> Rectangle;
 
void minimal_dimensions(char c, const Rectangle& r, int& fils, int& cols){
    fils = 1;
    cols = 1;
    int imin, imax, jmin, jmax;
    bool fora = false;
    int k = 0;
    while (not fora and k < r.size()){
        int j = 0;
        while (not fora and j < r[0].size()){
            if (r[k][j] == c){
                imin = k;
                fora = true;
            }
            ++j;
        }
        ++k;
    }
    fora = false;
    int m = 0;
    while (not fora and m < r[0].size()){
        int i = 0;
        while (not fora and i < r.size()){
            if (r[i][m] == c){
                jmin = m;
                fora = true;
            }
            ++i;
        }
        ++m;
    }
    fora = false;
    int i = r.size()-1;
    while (not fora and i >= 0){
        int j = r[0].size()-1;
        while (not fora and j >= 0){
            if (r[i][j] == c){
                imax = i;
                fora = true;
            }
            --j;
        }
        --i;
    }    
    fora = false;
    int j = r[0].size()-1;
    while (not fora and j >= 0){
        int l = r.size()-1;
        while (not fora and l >= 0 ){
            if (r[l][j] == c){
                jmax = j;
                fora = true;
            }
            --l;
        }
        --j;
    }
    cols += jmax - jmin;
    fils += imax - imin;
}
 
int main() {
        int fils, cols;
        cin >> fils >> cols;
        char c;
        Rectangle r(fils, vector<char>(cols));
        for (int i = 0; i < fils; ++i) {
                for (int j = 0; j < cols; ++j) cin >> r[i][j];
        }
        cin >> c;
        minimal_dimensions(c, r, fils, cols);
        cout << "Columns: " << cols << ". Rows: " << fils << endl;
}