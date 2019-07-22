#include <iostream>
#include <vector>
using namespace std;

void calcula_posicions (const vector <double>& v, int& p, int& q){
    double max=v[0]/*, maxesq=v[0]*/;
    for (int i=0; i<v.size(); ++i){
        if (double (v[i])>(max)) {
            max=v[i];
            q=p;
            p=i;
        }
    }    
}

int main () {
cout.setf (ios::fixed);
cout.precision (6);

    int n;
    while (cin >> n){
        vector <double> v(n);
        for (int i=0; i<n; ++i){
            cin >> v[i];
        }
        int p=0, q=0;
        double suma=0;
        calcula_posicions(v, p, q);
        for (int j=0; j<=p-q; ++j){
            suma+= double (v[j+q]);                
        }
        cout << (suma) / double (p-q+1) << endl;
    }
}