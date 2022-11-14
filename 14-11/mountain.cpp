#include<iostream>
#include<vector>
#define pb push_back
using namespace std;
int lar_idx(vector<int> v){
	int idx = 0;
	for(int i = 1; i < v.size(); i++){
		if(v[i]>v[idx]){
			idx = i;
		}
	}
	return idx;
}
int peak_idx(vector<int> v){
	for(int i = 0; i < v.size() - 1; i++){
		if(v[i]>v[i+1]){
			return i;
		}
	}
	return v.size() - 1;
}
int bin_peak_idx(vector<int> v){
	int s = 0, e = v.size()-1;
	while(s<=e){
		int i = (s+e)/2;
		if(s == e){
			return i;
		}else if(v[i]<v[i+1]){
			s=i+1;
		}else{
			e = i;
		}
	}
	return -1;
}
int main(){
	std::vector<int> v;
	int n;
	cin>>n;
	for(int i = 0; i < n; i++){
		int t;
		cin>>t;
		v.pb(t);
	}
	// 1st method
	// find the index of largest element
	cout<<"peak index: "<<lar_idx(v)<<endl;
	cout<<"peak index: "<<peak_idx(v)<<endl;
	cout<<"peak index: "<<bin_peak_idx(v)<<endl;
	return 0;
}