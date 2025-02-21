#include<bits/stdc++.h>
using namespace std;
#define show(v) for(auto i:v){cout<<i<<" ";} cout<<endl;
int main(){
    // Pair 
    // Declaration
    // type 1
    // pair<datatype,datatype> name ={first_value,second_value};
    // type 2
    // pair<datatype,datatype> name = make_pair(first,second);

    // Values
    // pair_name.first
    // pair_name.second

    // We can store any data type in pairs - int , char , double
    // we can also store anything that we can wish
    // accessing is similar to things in pair

    pair<int,vector<int>>p={0,{1,2,3}};
    pair<int,char>p1; // int , char as data type
    pair<pair<int,int>,pair<int,int>>p11; // pair contains pair as data type
    show(p.second);
    for(auto i : p.second){cout<<i<<" ";}

}