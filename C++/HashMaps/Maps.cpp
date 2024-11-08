#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {1,2,3,4,5,6,7,1,2,1,1,2,3,4,5,6};
    map<int,int>m;
    for(auto i:a){
        m[i]++;
    }
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<"\n";
    }
    cout<<"Frequency of 1 : "<<m[1]<<"\n";
}