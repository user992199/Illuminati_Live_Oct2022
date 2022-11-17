#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> v){
	for(int i = 0; i < v.size(); i++){
		cout<<v[i]<<" ";
	}cout<<endl;
}
bool check_monotonic(vector<int> &v){
	bool inc = true;
	bool dec = true;
	for(int i = 0; i < v.size()-1; i++){
		if(v[i]>v[i+1]){
			inc = false;
		}else if(v[i]<v[i+1]){
			dec = false;
		}
	}
	return (inc || dec);
	// if(inc || dec){
	// 	return true;
	// }else{
	// 	return false;
	// }
}
int main(){
	vector<int> v;
	int n;
	cin>>n;
	for(int i = 0; i < n; i++){
		int num;
		cin>>num;
		v.push_back(num);
	}
	if(check_monotonic(v)){
		cout<<"YES the given vector is monotonic\n";
	}else{
		cout<<"NO the given vector is NOT monotonic\n";
	}
	print(v);
	return 0;
}