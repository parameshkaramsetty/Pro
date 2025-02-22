#include<bits/stdc++.h>
using namespace std;
#define show(a) for(auto i : a){cout<<i<<" ";} cout<<endl;
#define nl cout<<endl;
void vector_size(){
    // cout<<v.size();
}
void vector_sum(){

}
void vector_iterator(){
    vector<int>v = {1,2,3};
    vector<int>::iterator it = v.begin();//gives the adddress
    v.begin();//
    v.end();// address next to the last element
    cout<<*it<<endl;// pointer to the first element

}

int main(){    

    // Declaration


    // Input - 2 Types

    // Inorder to utilize based on index then declare the vector size at the time of initialization
    // vector<int>v(5)
    // then we can take input directly to the vector using for loop 0 to 5 v[i]

    // vector<int>v
    // take value in element and push it into vector v.push_back(p)

    // Vector Of Pairs
    // vector<pair<int,int>>v;
    // v.push_back(first,second);

    // when size is not declared
    // vector<pair<int,int>>v;
    // // v.push_back({first,second});
    // v.push_back({2,3});
    // v.push_back({4,5});
    // for(auto i : v){
    // cout<<i.first<<" "<<i.second<<endl;
    // }

    // when size is declared
    // cin>>v[i].first>>v[i].second;

    // size declared => v[i];

    // vector<int> v = {1,2,3,4,5}; // values cannot be given when size is given
    // vector<int>v(5) // takes garbage value

    // size of vector - vector_name.size();

    vector<int>a = {7,100,45,18,8};

    cout<<a.front()<<endl;
    auto it = find(begin(a),end(a),2)-begin(a);
    cout<<it != end(a)<<endl;



}