#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a = {1,2,3,4,5,6,7};
    int n = a.size();
    cout<<"size = "<<n<<endl;
    int target = 1;
    int s =  0,e = n-1;
    while(s<=e){
        int mid = (s + (e-s))/2;
        if(a[mid]==target){
            cout<<mid<<endl;
            break;
        }
        else if(a[mid]>target){
            e=mid-1;
        }
        else{
            s = mid+1;
        }
    }
}