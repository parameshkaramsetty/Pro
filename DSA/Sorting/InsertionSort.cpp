#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define len(a) sizeof(a)/sizeof(a[0])
void insertionSort(int a[], int n){
    /*
        take the element and place it in the correct order
        by comparing it with the previous elements inorder to keep it in correct place
        Checks left side
        Time Complexity : O(N^2) - Worst case scenario - Upper Bound
                          O(N)   - Best Case - No Swaps - 
                        
    */
   for(int i=0;i<n;i++){
     int j=i;
     while(j>0 && a[j-1]>a[j]){
        swap(a[j-1],a[j]);
        j--;
     }
   }
}
int main(){
    int a[] = {3,5,1,4,2,9,8,7,6};
    insertionSort(a,len(a));
}