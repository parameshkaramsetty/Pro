#include<bits/stdc++.h>
using namespace std;
int lastOcc(int *a,int key,int n){
    //From First Occurance
    if(n==0){
        return -1;
    }
    int small = lastOcc(a+1,key,n-1);
    if(small==-1){
        if(a[0]==key){
            return 0;
        }
        return -1;
    }
    return small+1;
}
int firstOcc(int *arr,int key,int n)
{
    //base case
    if(n==0) return -1;

    //recursive call
    if(arr[0]==key) return 0;

    //using small answer to get big ans
    int smallAns=  firstOcc(arr+1,key,n-1);

    if(smallAns==-1) return -1;

    else return smallAns+1; 
}
int lastOccurence(int *a,int k,int n){
    // From Last Occurence
    if(n==0)return -1;
    if(a[n-1]==k)return n-1;
    int l = lastOccurence(a,k,n-1);
    if(l==-1)return -1;
    else return l; 
}
int main()
{
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++) cin>>arr[i];

    int key;
    cin>>key;
    // int res=firstOcc(arr,key,a);
    int last=lastOccurence(arr,key,a);
    cout<<"Last : "<<last;

}