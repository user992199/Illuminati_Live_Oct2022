#include<iostream>
#include<vector>
#define pb push_back
using namespace std;
void print_missing_numbers(vector<int> v){
	vector<int> v1(v.size()+1); // 0 0 0 0 0 0 
	for(int i = 0; i < v.size(); i++){
		v1[v[i]]++;
	}
	cout<<"missing elements: ";
	for(int i = 1; i < v1.size(); i++){
		if(v1[i] == 0){
			cout<<i<<" ";
		}
	}
	cout<<endl;
	cout<<"repeating elements: ";
	for(int i = 1; i < v1.size(); i++){
		if(v1[i] > 1){
			cout<<i<<" ";
		}
	}
	cout<<endl;
}
int main(){
	vector<int> v;
	int n;
	cin>>n;
	for(int i = 0; i < n; i++){
		int t;
		cin>>t;
		v.pb(t);
	}
	print_missing_numbers(v);
	return 0;
}