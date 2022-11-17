#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> v){
	for(int i = 0; i < v.size(); i++){
		cout<<v[i]<<" ";
	}cout<<endl;
}
void rotate_by_1_temp(vector <int> &v){
	int n = v.size();
	vector<int> temp(n);
	for(int i = 0; i < n-1; i++){
		temp[i+1] = v[i]; 
	}
	temp[0] = v[n-1];
	for(int i = 0; i < n; i++){
		v[i] = temp[i];
	}
}
void rotate_by_1(vector <int> &v){ // 5 1 2 3 4
	int temp = v[v.size()-1]; // temp = 5
	for(int i = v.size()-2; i >= 0; i--){ // i = 0
		v[i+1] = v[i]; // v[1] = v[0];
	}
	v[0] = temp;
}
void rotate_by_k(vector<int> &v, int k){
	for(int i = 0; i < k; i++){
		rotate_by_1(v);
	}
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