#include<bits/stdc++.h>
using namespace std;
#define show(v) for(auto i:v){cout<<i<<" ";} cout<<endl;

void sort_cordinates(){
    // Sort the Given Co-Ordinates

    pair<int,int>x = make_pair(3,4);
    pair<int,int>y = make_pair(1,2);
    pair<int,int>z = make_pair(5,7);
    pair<int,int>a = {1,0};

    vector<pair<int,int>>v={x,y,z};
    v.emplace_back(a);
    sort(begin(v),end(v));
    for(auto i : v){
        cout<<i.first<<" "<<i.second<<endl;
    }
}
int main(){
     // Pair 
    // Declaration
    // type 1
    // pair<datatype,datatype> name ={first_value,second_value};
    // to initiate values of a pair {1,2}
    // type 2
    
    // pair<datatype,datatype> name = make_pair(first,second);
    // make_pair(value_1,value_2) -> used to make a pair
    
    // Values
    // pair_name.first
    // pair_name.second

    // using make_pair(first,second) or {first , second}

    // We can store any data type in pairs - int , char , double
    // we can also store anything that we can wish
    // accessing is similar to things in pair

    pair<int,vector<int>>p={0,{1,2,3}};
    pair<int,char>p1; // int , char as data type
    pair<pair<int,int>,pair<int,int>>p11; // pair contains pair as data type
    show(p.second);
    for(auto i : p.second){cout<<i<<" ";}
}