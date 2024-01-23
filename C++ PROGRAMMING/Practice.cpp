#include<bits/stdc++.h>
using namespace std;
#define len(a) sizeof(a)/sizeof(a[0])
#define print(a) for(auto i : a) cout<<i<<" "
void takeInput(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}	

void reverse(int a[],int i,int n){
	if(i>n/2)return ;// it tells that all the cases are true while it is checking each case
	swap(a[i],a[n-i-1]);
	reverse(a,i+1,n);
}
bool p(string &s , int i,int n){
	if(i==n/2)return true;
	if(s[i]!=s[n-i-1])return false;
	p(s,i+1,n);
}
void printSubSequences(int i ,vector<int>&v,int a[],int n){
	// if(i>=len(a)){
	// 	print(a);
	// }
	// v.push_back(a[i]);
	// printSubSequences(i+1,v,a,n);
	// v.

}
void printfn(int n){
		cout<<floor(pow(((1+sqrt(5))/2),n)/sqrt(5));

}
int main(){
	takeInput();
	int a[] = {1,2,3,4,5,6};
	// reverse(a,0,size(a));
	// for(auto i :a){
	// 	cout<<i<<" ";
	// }
	// cout<<size(a)<<"\n";
	// string s = "fuckkcuf";
	// // while passing strings we need to pass the reference
	// cout<<p(s,0,s.length())<<"\n";
	// cout<<s.size()<<endl;
	vector<int>s;
	printfn(3);

}
