#include <iostream>
#include <vector>
using namespace std;
 
vector<int> calcula_cims(const vector<int>& v){
    int mida=v.size();
    int cims=0;
    vector<int> vCims(mida,0);
    for(int i=0;i<mida-2;++i){
        if(v[i]<v[i+1] && v[i+1]>v[i+2]){
                vCims[cims]=v[i+1];
                ++cims;
        }
    }
    while(vCims[mida-1]==0 && vCims.size()!=0){
            vCims.pop_back();
            --mida;
    }
    return vCims;
}
 
int main(){
    int n;
    cin>>n;
    vector<int> A(n,0);
    for(int i=0;i<A.size();++i) cin>>A[i];
    vector<int> elsCims=calcula_cims(A);
    int k=elsCims.size();
    if(k==0){
        cout<<"0:"<<endl;
        cout<<'-'<<endl;
    }
    else{
        cout<<k<<": ";
        for(int i=0;i<k;++i){
                cout<<elsCims[i];
                if(i!=k-1) cout<<' ';
        }
        cout<<endl;
        bool no_hiha_gran=true;
        for(int i=0;i<k-1;++i){
            if(elsCims[i]>elsCims[k-1]){
                cout<<elsCims[i];
                if(i!=k-2) cout<<' ';
                no_hiha_gran=false;
            }
        }
        if(no_hiha_gran)cout<<'-';
        cout<<endl;
    }
}