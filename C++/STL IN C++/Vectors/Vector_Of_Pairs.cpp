#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<pair<int,int>>vop;
    // This is similar to vector<int> but here we have used pair as data type instead of int
    // while using n elements in vector we need to declare as vector<int>name_of_vector(n);
    for(int i=0;i<5;i++){
        pair<int,int>p;
        cin>>p.first>>p.second;
        vop.push_back(p);
    }
    for(auto i : vop){
        cout<<i.first<<" "<<i.second<<endl;;
    }

}