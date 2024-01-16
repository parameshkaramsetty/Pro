#include<bits/stdc++.h>
using namespace std;
int gcd_recursion(int a,int b){
    if(b==0)return a;
    return gcd_recursion(b,a%b);
}
int main(){
    cout<<__gcd(18,8)<<endl;// gives gcd of two numbers
    /*
    We can also get gcd of two numbers using euclidean algorithm
    it works like
    gcd(a,b) = gcd(a,b-a)(if b>a) and vice versa it can be simplified as 
    gcd(b%a,a)

    */
   cout<<gcd_recursion(18,8)<<endl;
}