// printing subarrays of a array using bit manipulation
#include<bits/stdc++.h>
using namespace std;
void printSubArrays(vector<int>&a,int n){
    string s = "", ans = "";
    
    for(int i=0;i<n;i++){
        s="";
        for(int j=i;j<n;j++){
            s+=to_string(a[j]);
            ans=ans+s+" ";
        } 
        ans+="\n";
        
    }
    cout<<ans;
}
/*
1 2 3 4

1 12 123 1234 
2 23 234 
3 34 
4 

*/
int main(){
    vector<int>a{1,2,3,4};
    printSubArrays(a,a.size());
    
    
}