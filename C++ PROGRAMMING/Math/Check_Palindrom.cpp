#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 1234554321;
    string s = to_string(n);
    string t = s;
    reverse(s.begin(),s.end());//reversing the string
    if(t==s)cout<<"1"<<"\n";//checking if it is a palindrome

}