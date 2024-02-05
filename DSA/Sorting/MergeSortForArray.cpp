#include<bits/stdc++.h>
using namespace std;
#define len(a) size(a)/size(a[0])
void merge(int a[],int l,int m , int r){
    int t[r-l];
    int left = l;
    int right = m+1;
    int i=0;
    while(left<=m and right<=r){
        if(a[left]<=a[right]){
            t[i]=a[left];
            left++;
            
        }
        else{
            t[i]=a[right];
            right++;
        }
        i++;
    }
    while(left<=m){
        t[i]=a[left];
        left++;
        i++;
    }
    while(right<=r){
         t[i]=a[right];
         right++;
         i++;
    }
    for(int i=l;i<=r;i++){
        a[i]=t[i-l];
    }
}
void mergeSort(int* arr, int l, int r) {
    // Write Your Code Here
    if(l>=r)return;
    int m = (l)+(r-l)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
}
int main(){
    int a[5] = {3,2,4,1,5};
    mergeSort(a,0,4);
    for(auto i:a){
        cout<<i<<" ";
    }
}