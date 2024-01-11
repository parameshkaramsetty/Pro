#include<bits/stdc++.h>
using namespace std;
int main(){
    int a , b;
    cin>>a>>b;
    int ans = 1;
    while(b>0){
        if(b&1){
            b -= 1;
            ans *= a;
        }
        else{
            b = b/2;
            a = a*a;
        }
    }
    cout<<ans<<"\n";
}