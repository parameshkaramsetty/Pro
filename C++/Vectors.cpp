#include<bits/stdc++.h>
using namespace std;
#define show(a) for(auto i : a){cout<<i<<" ";} cout<<endl;
#define nl cout<<endl;
int main(){    
    
    //vectors
    // vector<int>a(10,1);
    // show(a);//1 1 1 1 1 1 1 1 1 1 
    
//     vector<int>b = {3,2,4,1,5};
//     // sort
//     sort(b.begin(),b.end());//ASC
//     sort(b.begin(),b.end(),greater<int>()); // DESC
//     show(b);//1 2 3 4 5 
    
//     //reverse
//     reverse(b.begin(),b.end());
//     show(b);//5 4 3 2 1
    
    // vector<int>a(10,10);
    // show(a);
    // cout<<endl;
    // a.clear();
    // cout<<a.size()<<endl;
    
    //N-D vectors
    //vector<data_type>vector_name -> 1D
    //vector<vector<int>>vector_name; -> 2D
    //vector<vector<vector<int>>>vector_name ->3D
    
    // //Initialization of N-D vectors
    // //1D vectors
    // vector<int>a(10,1);
    // //2D vectors - 10 x 20
    // vector<vector<int>>b(10,vector<int>(20,2));// 10 rows , 20 cols
    
    // can also be declared as 
    // vector<int> a[20]; --> 2D vector of fixed size
    
    
    
    // for(auto i : b){
    //     for(auto j : i){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<b[0][1]<<endl;
    
    // // cout<<b.size()<<" "<<b[0].size();// 10 20
    // //3D vectors - 10 x 20 x 30
    // vector<vector<vector<int>>>c(10,vector<vector<int>>(20,vector<int>(30,3)));
    // vector<vector<int>> a[10]; --> 3D vector of fixed size
    
    // cout<<c.size()<<" "<<c[0].size()<<" "<<c[0][0].size();//10 20 30
    // c[0].push_back(1);
    // b.push_back(vector<int>(10,20));
    // for(auto i : b){
    //     for(auto e : i){
    //         cout<<e<<" ";
    //     }
    // }
    
    // b.push_back(20);
    // a.emplace_back(20);//slightly faster than the push_back
    // a.pop_back(20);
    
    // vector<int>a = {1,2,3};
    // show(a);
    // reverse(a.begin(),a.end());
    // //copying from one vector to other vector
    // vector<int>b(a);
    // show(b);
    //swap - swap(vector1,vector2);
    // swap(a,b);
}