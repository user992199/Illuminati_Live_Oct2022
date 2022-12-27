#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v;
	int n = 5;
	for(int i = 1; i <= n; i++){
		v.push_back(i);
	}
	for(int i = 0; i < v.size(); i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	v.clear();
	// v.push_back(9);
	for(int i = 0; i < 8; i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	if(v.empty()){
		cout<<"vector is empty\n";
	}else{
		cout<<"non\n";
	}
	cout<<v.size()<<" "<<v.capacity()<<endl;
	return 0;
}