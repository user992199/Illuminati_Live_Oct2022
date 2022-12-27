#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i = 0; i < n; i++){
		int t;
		cin>>t;
		v.push_back(t);
	}
	for(int i = 0; i < v.size(); i++){
		cout<<v[i]<<" ";
	}cout<<endl;	
	return 0;
}