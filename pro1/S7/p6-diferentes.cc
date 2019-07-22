#include<iostream>
#include<string>
using namespace std;

//pre: ----
//post: retorna el numero de letras diferentes de s
int num_difs(const string& s) {
    int n = s.length();
    if (n == 0) return 0;
    int res = 1;
    for (int i = 1; i < n; ++i) { 
        int j = 0;
        while (s[j] != s[i]) ++j;
        if (j == i) 
            //caracter s[i] no ha aparecido antes
            ++res;
        
    }
    return res;
}



int main() {
    string s;
    cin >> s;
    cout << num_difs(s) << endl;
}


    
