// when ever we shift the elements from left to right do it from the end of the array

#include<bits/stdc++.h>
using namespace std;
int insert(int a[],int n,int c,int k){
    if(c<n){
        a[c]=k;
        return c+1;
    }
    return n;
}
int main(){
    int a[6] = {1,2,3,4,5};
    int n = insert(a,6,5,8);
    // cout<<n;
    // a[n-1]=8;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }       
}
