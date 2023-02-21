#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> &v){
	for(int i = 0; i < v.size(); i++){
		cout<<v[i]<<" ";
	}cout<<endl;
}
int main(){
	vector<int> v(5, 8);
	print(v);
	v.reserve(13);
	v.reserve(3);
	cout<<v.capacity()<<endl;
	v.resize(6);
	v.resize(3);
	print(v);
	cout<<v.capacity()<<endl;
	cout<<v.size()<<endl;
	return 0;
}