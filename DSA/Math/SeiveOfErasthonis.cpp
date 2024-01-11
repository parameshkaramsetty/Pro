#include<bits/stdc++.h>
using namespace std;
#define print(a)     for(auto i:a)cout<<i<<" ";
int main(){
    vector<int> a(11,0);
    a[0]=1;
    a[1]=1;
    int n;
    cin>>n;
    
    for(int i=2;i<=n;i++){
        if(a[i]==0){
         for(int j=2*i;j<n;j+=i){
            a[j]=1;
         }
        }
    }
    print(a);
    cout<<"\n";
    int number;
    cin>>number;
    if(a[number]!=1){
        cout<<"Prime";
    }
    else cout<<"Not a Prime";
    
    
}

