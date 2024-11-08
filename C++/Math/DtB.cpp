#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 101111;
    int ans = 0,i=0;
    while(n>0){
        int b = n%10;
        if(b==1){
            ans += pow(2,i);
        }
        i+=1;
        n/=10;
    }
    cout<<ans<<endl;
    
}