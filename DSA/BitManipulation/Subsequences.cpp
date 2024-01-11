// printing subsets of a array using bit manipulation
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a{1,2,3,4};
    int t = 1<<a.size();
    for(int i=1;i<t;i++){
        for(int j=0;j<a.size();j++ ){
            if(i&(1<<j))cout<<a[j]<<" ";
        }
        cout<<"\n";
    }
       
}