#include<iostream>
#include<vector>
#define pb push_back
using namespace std;
void print(vector<int> v){
	for(int i = 0; i < v.size(); i++){
		cout<<v[i]<<" ";
	}cout<<endl;
}
void vec_rev(vector<int> v){
	for(int i = 0; i < v.size()/2; i++){
		swap(v[i], v[v.size()-1-i]);
	}
}
int main(){
	vector<int> v;
	int n;
	cin>>n;
	for(int i = 0; i < n; i++){
		int num;
		cin>>num;
		v.pb(num);
	}
	cout<<"Vector before reversing: ";
	print(v);
	vec_rev(v);
	cout<<"Vector after reversing:  ";
	print(v);
	return 0;
}