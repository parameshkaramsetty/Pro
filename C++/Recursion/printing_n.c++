#include<bits/stdc++.h>
using namespace std;
//Recursion
//printing numbers using recursion
//n to 1
void printnto1(int n){
    if(n==0)return;//
    cout<<n<<" ";//
    printnto1(n-1);//      
}
//1 to n
void print1ton(int n){
    if(n==0)return;
    print1ton(n-1);
    cout<<n<<" ";
}

int main(){
    int n=5;
    print1ton(n);
}