#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int>a{1,3,2,5};

    vector<int>b(a.begin(),a.begin()+4);
    for(auto i :b){
        cout<<i<<" ";
    }
    cout<<endl;
    
    vector<int>c(a.end()-3,a.end()-1);
    for(auto i :c){
        cout<<i<<" ";
    }
    cout<<endl;
    
    vector<int>d(a.rbegin()+2,a.rbegin()+4);
    for(auto i :d){
        cout<<i<<" ";
    }
    cout<<endl;
    
    vector<int>e(a.rend()-4,a.rend());
    for(auto i :e){
        cout<<i<<" ";
    }
    cout<<endl;
    
    vector<int>f(a.begin(),a.end());
    for(auto i :f){
        cout<<i<<" ";
    }
    cout<<endl;
    
    vector<int>g(a.end()-3,a.begin()+2);
    for(auto i :g){
        cout<<i<<" ";
    }
    cout<<endl;
    
    vector<int>h(a.rbegin(),a.rend());
    for(auto i :h){
        cout<<i<<" ";
    }
    cout<<endl;
    
    vector<int>j(a.rend()-4,a.rbegin()+4);
    
    for(auto i :j){
        cout<<i<<" ";
    }
    cout<<endl;
    
    
    
    for(auto it = a.end()-1;it!=a.begin()-1;it--){
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it = a.begin();it!=a.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it = a.rend()-1;it!=a.rbegin()-1;it--){
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it=a.rbegin();it!=a.rend();it++){
        cout<<*it<<" ";
    }
    
    
    /*
    Output : 
        1 3 2 5 
        3 2 
        3 1 
        5 2 3 1 
        1 3 2 5 
        3 
        5 2 3 1 
        5 2 3 1 
        5 2 3 1 
        1 3 2 5 
        1 3 2 5 
        5 2 3 1 
        */
    
}