#include<bits/stdc++.h>
using namespace std;
#define ll long long
int m = 1e9+7;//using this we can apply mod which is asked in many problems
ll BE(ll a, ll b){
    ll ans = 1;
    while(b){
        if(b&1){
            ans*=a;
            ans%=m;
            b-=1;
        }
        a*=a;
        a%=m;
        b>>=1;
    }
    return ans;
}
int main(){
    cout<<BE(2562,15672);
}