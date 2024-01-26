#include<bits/stdc++.h>
using namespace std;
void give(int n,vector<int>&a){
    if(n==0)return ;
    give(n-1,a);
    a.push_back(n);
}
vector<int> print(int n){
    vector<int>a;
    give(n,a);
    return a;
}
int main(){
    int n;
    cin>>n;
    vector<int>a = print(n);
    for(auto i:a){
        cout<<i<<" ";
    }                                                                                                        
}