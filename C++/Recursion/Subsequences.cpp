#include<bits/stdc++.h>
using namespace std;
#define len(a) sizeof(a)/sizeof(a[0])
void printSubSequence(int i,int n,int a[],vector<int>&ds){
    if(i==n){
        for(auto i:ds){
            cout<<i<<" ";
        }
        if(ds.size()==0){
            cout<<"{}";
        }
        cout<<"\n";
        return ;
    }
    ds.push_back(a[i]);
    printSubSequence(i+1,n,a,ds);
    ds.pop_back();
    printSubSequence(i+1,n,a,ds);
}
int main(){
    int a[] = {3,1,2};
    vector<int>ds;
    printSubSequence(0,len(a),a,ds);
}