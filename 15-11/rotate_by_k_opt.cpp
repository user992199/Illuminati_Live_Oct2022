#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> v){
	for(int i = 0; i < v.size(); i++){
		cout<<v[i]<<" ";
	}cout<<endl;
}
void reverse(vector<int> &v, int s, int e){
	for(; s<e; s++, e--){
		swap(v[s], v[e]);
	}
}
void rotate_by_k(vector<int> &v, int k){
	reverse(v, 0, v.size()-1);
	reverse(v, 0, k-1);
	reverse(v, k, v.size()-1);
}
int main(){
	vector<int> v;
	int n, k;
	cin>>n>>k;
	for(int i = 0; i < n; i++){
		int num;
		cin>>num;
		v.push_back(num);
	}
	rotate_by_k(v, k);
	print(v);
	return 0;
}