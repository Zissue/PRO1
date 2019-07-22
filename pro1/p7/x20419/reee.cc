#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
const int LONG_ALFABET = 'z' - 'a' + 1;
 
char lletra_mes_frequent(const string& s){
    vector <char> abc(LONG_ALFABET,0);
    for(int i=0;i<abc.size();++i){
        abc[i]='a'+i;
    }
    vector<int> contaLletres(LONG_ALFABET,0);
    for(int i=0;i<LONG_ALFABET;++i){
        for(int j=0;j<s.size();++j){
            if(s[j]==abc[i]) ++contaLletres[i];
        }
    }
    int aux=0,pos=0;
    for(int i=0;i<LONG_ALFABET;++i){
        if(contaLletres[i]>aux){
            aux=contaLletres[i];
            pos=i;
        }
    }
    return pos+'a';
}
 
int main(){
    cout.setf(ios::fixed);
    cout.precision(2);

    int n;
    double mitjana=0;
    vector <string> s1(n);
    cin>>n;

    for(int i=0;i<n;++i){
        cin>>s1[i];
        mitjana+=s1[i].size();
    }

    mitjana=mitjana/n;
    cout<<mitjana<<endl;

    for(int i=0;i<n;++i){
        if(s1[i].size()>=mitjana) cout<<s1[i]<<": "<<lletra_mes_frequent(s1[i])<<endl;
    }
}