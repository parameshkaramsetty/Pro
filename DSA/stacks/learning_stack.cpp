#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> s;
    //push operation
    s.push(10);
    s.push(20);
    s.push(30);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();// removes the top most element
        
    }
}