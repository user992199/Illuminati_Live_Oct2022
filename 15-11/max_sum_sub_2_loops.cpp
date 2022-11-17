#include<iostream>
#include<vector>
using namespace std;
int max_subarr_sum(vector<int> v){
	int max_sum = INT_MIN;
	vector<int> csum(v);
	csum[0] = v[0];
	int n = v.size();
	for(int i = 1; i < n; i++){
		csum[i] = v[i] + csum[i-1];
	}
	for(int i = 0; i < n; i++){ // i = n-1
		for(int j = i; j < n; j++){ // j = n
			int sum = 0;
			i == 0 ? sum = csum[j] : sum = csum[j] - csum[i-1];
			if(sum > max_sum){
				max_sum = sum;
			}
		}
	}
	return max_sum;
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
	cout<<max_subarr_sum(v)<<endl;
	return 0;
}