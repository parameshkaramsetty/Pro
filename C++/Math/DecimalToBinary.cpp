//Binary to Decimal
#include<bits/stdc++.h>
using namespace std;
int binaryToDecimal(int n){
     int ans = 0,t=1;
    while(n){
        int b = n&1;
        ans = ans + (t)*(b);
        t*=10;
        n=n>>1;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    if(n>=0){
        cout<<binaryToDecimal(n);
    }
    else{
        int ans = binaryToDecimal(-n);
        ans =~ans;
        ans = ans+1;
        cout<<ans<<" ";
    }
}