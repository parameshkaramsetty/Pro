#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define len(a) sizeof(a)/sizeof(a[0])
void selectionSort(int a[],int n){
    // selects the min. and swap
    // get the minimum and swap it 

    // TC : O(N^2) - Worst case


    // 3 5 1 4 2 
    // find the min. element and swap with the first  -  then upto first element it is sorted
    // find the min. element from the second element and swap with second element
    // find the min. element from the third element and swap with the third element

    // 3 5 1 4 2
    // i=0)
    // 1 5 3 4 2
    // i=1)
    // 1 2 3 4 5
    // i=3)
    // 1 2 3 4 5 --> finish - it checks for remaining cases
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min = j;
            }
        }
        swap(a[min],a[i]);
    }



}
int main(){
    int a[] = {3,5,1,4,2};
    selectionSort(a,len(a));
    for(auto i:a){
        cout<<i<<" ";
    }
    
}