#include<bits/stdc++.h>
using namespace std;
#define show(a) for(auto i : a){cout<<i<<" ";} cout<<endl;
#define nl cout<<endl;
int main(){
    vector<int>a = {1,2,3,4,5};
    vector<int>b(a.begin(),a.end());
    vector<int>c(a.end()-5,a.begin()+5);
    vector<int>e(a.begin(),a.begin()+5);
    vector<int>f(a.end()-5,a.end());
    vector<int>g(a.rbegin(),a.rend());
    vector<int>h(a.rbegin(),a.rbegin()+5);
    vector<int>i(a.rend()-5,a.rend());
    vector<int>j(a.rend()-5,a.rbegin()+5);
    

    for(auto it = a.rend()-1;it!=a.rbegin()-1;it--){
        cout<<*it<<" ";
    }
    nl; 
    
    for(auto it = a.rbegin();it!=a.rend();it++){
        cout<<*it<<" ";
    }
    nl;
    
    for(auto it = a.begin();it!=a.end();it++){
        cout<<*it<<" ";
    }
    nl;
    
    for(auto it = a.end()-1;it!=a.begin()-1;it--){
        cout<<*it<<" ";
    }
    
    
    
    
    
    
    
    
}