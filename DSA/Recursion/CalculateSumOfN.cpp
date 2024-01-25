#include<bits/stdc++.h>
using namespace std;
#define sq(a) (a)*(a)
#define len(a) sizeof(a)/sizeof(a[0])
int calculateSumOfN(int n){
    if(n==0)return 0;
    return n + calculateSumOfN(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<calculateSumOfN(n)<<"\n";
}