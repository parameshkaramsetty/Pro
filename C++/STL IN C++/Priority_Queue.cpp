#include<bits/stdc++.h>
using namespace std;
#define show_pq(pq) while(!pq.empty()){cout<<pq.top()<<" ";pq.pop();}cout<<endl;
void maxx_heap(){

    priority_queue<int>max_heap;// keeps the element in queue based on priority as max_element in front - descending order
    max_heap.push(8);
    max_heap.push(9);
    max_heap.push(21);
    max_heap.push(81);

    while(!max_heap.empty()){
        cout<<max_heap.top()<<" ";
        max_heap.pop();
    }
    cout<<endl;
    
}
void minn_heap(){
    priority_queue<int,vector<int>,greater<int>>min_heap;// keeps the element in queue based on priority as max_element in front - descending order
    min_heap.push(8);
    min_heap.push(9);
    min_heap.push(21);
    min_heap.push(81);

    while(!min_heap.empty()){
        cout<<min_heap.top()<<" "; // output : 8 9 21 81 
        min_heap.pop();
    }
    cout<<endl;
}
int main(){
    // push , pop , empty , size , top 
    priority_queue<int>pq; // arranges the element in a priority queue with maximum element as first
    pq.push(81); // insert
    pq.push(27);
    pq.push(36);
    pq.push(45); // insert
    pq.push(81);
    pq.push(63);

    cout<<pq.size()<<endl; // return the size of the queue

    // pq.pop(); // pops the first element

    show_pq(pq);

    cout<<pq.top()<<endl; // shows the top most element






}