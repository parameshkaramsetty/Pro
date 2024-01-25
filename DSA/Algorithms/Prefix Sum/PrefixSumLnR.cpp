#include<bits/stdc++.h>
using namespace std;
#define len(a) sizeof(a)/sizeof(a[0])
int main(){
    int a[] = {1,2,3,4,5,6};
    int n = len(a),p[n];
    p[0]=a[0];
    for(int i=1;i<n;i++){
        p[i]=a[i]+p[i-1];
    }
    for(auto i:p){
        cout<<i<<" ";
    }
    cout<<"\n";
    // if we want to calculate the sum of a sub-part of a array in the given intervals then we can use this 
    // since l is included we need to 
    // we need to subtract a[r] - a[l-1]
    int r , l;
    cin>>l>>r;
    cout<<p[r]-p[l-1]<<"\n";
    
}

/*
i   0 1 2 3  4   5
a   1 2 3 4  5   6
p   1 3 6 10 15  21

we can get sum b/w two elements in a array using this 
L and R
Brute force - we can get it by running the loop from l to r
But we need a way to organize it
So we need to use Prefix sum
and we can get sum B/W L and R
as L is also included we need include L in the prefix array and subtract L-1
we can get sum b/w L n R
by, 
    p[R]-p[L-1]
    

*/