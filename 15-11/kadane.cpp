#include<iostream>
#include<vector>
using namespace std;
int kadane(vector<int> v){
	int curr_sum = 0;
	int max_sum = INT_MIN;
	for(int i = 0; i < v.size(); i++){
		curr_sum += v[i];
		// if(curr_sum < 0){
		// 	curr_sum = 0;
		// }
		curr_sum = max(curr_sum, 0);
		// if(max_sum < curr_sum){
		// 	max_sum = curr_sum;
		// }
		max_sum = max(max_sum, curr_sum);
	}
	return max_sum;
}
int kadane_modified(vector<int> v){
	int curr_sum = v[0];
	int max_sum = v[0];
	for(int i = 1; i < v.size(); i++){
		curr_sum += v[i];
		max_sum = max(max_sum, curr_sum);
		curr_sum = max(curr_sum, 0);
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
	cout<<kadane(v)<<endl;
	cout<<kadane_modified(v)<<endl;
	return 0;
}