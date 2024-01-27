#include<bits/stdc++.h>
using namespace std;
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
int lastOcc(int *arr,int key,int n)
{
    
    //base case
    if(n==0) return -1;

    //recursive call
    if(arr[n--]==key) return 0;

    int smallAns = lastOcc(arr,key,n);

    if(smallAns==-1) return -1;

    else return smallAns+1;

    
    //Forward
    /*
    if(n==0) return -1;

    //recursice call

    int smallAns=lastOcc(arr+1,key,n-1);
    if(smallAns==-1)
    {
        if(arr[0]==key) return 0;
        else return -1;
    }
    else{
        return smallAns+1;
    }
    */

}
int main()
{
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++) cin>>arr[i];

    int key;
    cin>>key;

    int res=firstOcc(arr,key,a);
    int last=lastOcc(arr,key,a);
    cout<<"First"<<res<<" "<<"Last"<<last;

}