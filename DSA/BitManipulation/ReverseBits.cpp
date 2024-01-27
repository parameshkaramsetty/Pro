#include<bits/stdc++.h>
using namespace std;
long reverseBits(long n) {
    // Write your code here.
    long s=0;
    for(long i=0;i<32;i++){
        if((n&(1<<i))>0){
            s|=long(1)<<(31-i);
        }
    }
    return s;//3221225472
}
int main(){
    long n;
    cin>>n;
    cout<<reverseBits(n);//3
}