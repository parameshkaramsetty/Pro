#include<bits/stdc++.h>
using namespace std;
#define show(a) for(auto i : a){cout<<i<<" ";} cout<<endl;
#define nl cout<<endl;
void vector_size(){
    // cout<<v.size();
}
void vector_sum(){
    // accumulate(start_iterator,end_iterator,initial_sum);
}
void vector_iterator(){
    vector<int>v = {9,18,27,36,45,54,63,72,81};
    // vector<int>::iterator it = v.begin();//gives the adddress

    // forward iterators - goes from left to right
    // v.begin();// points to the address of the first element
    // v.end();// address next to the last element

    for(auto i = v.begin();i!=v.end();i++){
        cout<<*i<<" ";
    }
    nl;
    for(auto i = v.end()-1;i!=v.begin()-1;i--){
        cout<<*i<<" ";
    }
    nl;
    // // backward iterators - goes from right to left

    // v.rbegin();// points to the address of the last element
    // v.rend();//points to the address before the first element

    for(auto i = v.rend()-1;i!=v.rbegin()-1;i--){
    cout<<*i<<" ";
    }
    nl;
    for(auto i = v.rbegin();i!=v.rend();i++){
        cout<<*i<<" ";
    }
    nl;

}
void note(){
    // Declaration


    // Input - 2 Types

    // Inorder to utilize based on index then declare the vector size at the time of initialization
    // vector<int>v(5)
    // then we can take input directly to the vector using for loop 0 to 5 v[i]

    // vector<int>v
    // take value in element and push it into vector v.push_back(p)

    // Vector Of Pairs
    // vector<pair<int,int>>v;
    // v.push_back({first,second});

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

    // vector<int>a = {7,100,45,18,8};

    // cout<<a.front()<<endl;
    // auto it = find(begin(a),end(a),2)-begin(a);

}
void swap_vectors(){
    vector<int>v = {9,18,27,36,45,54,63,72,81};
    vector<int>u = {8,16,24,32,40};
    // swap(v,u); // swaps two vectors
    show(v);//8 16 24 32 40 
    show(u);//9 18 27 36 45 54 63 72 81 
}
void clear_vector(){
    vector<int>v = {9,18,27,36,45,54,63,72,81};
    v.clear();// clears the entire vector
    cout<<v.size()<<endl;// prints 0
}
void erase_elements_in_a_vector(){
    vector<int>v = {9,18,27,36,45,54,63,72,81};
    

    // erase - the elements based on start and end iterator
    /* syntax - vector_name.erase(start_iterator,end_iterator) - deletes elements from the vector based on the parameters
                start iterator - included
                end iterator   - exclude

                vec.erase(start_iterator) -> deletes a particular element from the vector



    */

    v.erase(begin(v)+1,begin(v)+2); // erase elements based on start and end iterators - 9 27 36 45 54 63 72 81 
    show(v);

    v.erase(begin(v));
    show(v);
}
void find_elements_in_vector(){
    vector<int>v = {9,18,27,36,45,54,63,72,81};

    auto it = find(begin(v),end(v),91);
    cout<< (it != end(v)) <<endl; // prints 0 - not found

    it = find(begin(v),end(v),81);
    cout<< (it != end(v)) <<endl; // prints 1 - found
}
void insert_element_to_vector(){
    // insert 
    // syntax - vector_name.insert(iterator_pos , element to be added);
    vector<int>v = {9,18,27,36,45,54,63,72,81};

    v.insert(begin(v)+1,0);
    show(v);//9 0 18 27 36 45 54 63 72 81 
}
void sort_vector(){
    vector<int>v = {9,  18, 27, 36, 45, 63, 54, 72,81,1 };

    // sort 
    // sytax - sort(begin_iterator , end_iterator) -> sort the elements in the array based on the begin and end iterator
    sort(begin(v),end(v));
    // sort(begin(v),end(v)-2);//9 18 27 36 45 54 63 72 81 1
}
void reverse_vector(){
    vector<int>v = {9,  18, 27, 36, 45, 63, 54, 72,81,1 };

    // reverse
    // syntax - reverse(start_iterator,end_iterator)
    reverse(begin(v),end(v));//1 81 72 54 63 45 36 27 18 9 
}
int main(){    
    // Vector Declaration
    // vector<int>vd1;
    // vector<int>vd2(5);
    // vector<int>vd3 = {9,18,27,36,45,54,63,72,81};

    // vector Functions
    // size push_back/emplace_back pop_back insert erase swap sort reverse
    //size of vector - v.size()


    // vd1.push_back(1);
    // vd1.push_back(11);
    // vd1.push_back(111); // adds element at the end of the vector
    // show(vd1); // 1 11 111

    // vd1.pop_back(); // removes the last element of the vector
    // show(vd1);// 1 11

    // v.clear();// clears the entire vector

    // v.erase(begin(v)+1);

    // v.insert(begin(v)+2,100);

    vector<int>v = {9,  18, 27, 36, 45, 63, 54, 72,81,1 };

    sort(begin(v),end(v),greater<int>()); // sorts in decreasing order
    // reverse(begin(v),end(v));

    

    show(v);














    


    






    





}