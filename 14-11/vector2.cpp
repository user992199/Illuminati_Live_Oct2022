#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v;
	int i = 1;
	for(; i < 8; i++){
		v.push_back(i);
	}
	for(int i = 0; i < v.size(); i++){
		cout<<v[i]<<" ";
	}cout<<endl;
	v.pop_back();
	v.pop_back();
	v.pop_back();
	v.pop_back();
	v.push_back(100);
	for(int i = 0; i < 8; i++){
		cout<<v[i]<<" ";
	}cout<<endl;
	v.pop_back();
	v.pop_back();
	v.pop_back();
	return 0;
}