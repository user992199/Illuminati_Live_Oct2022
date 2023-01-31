#include<iostream>
#include<vector>
using namespace std;
int num_of_ways(int n, int k){
	// base case
	if(n == 0) return 1;
	if(n < 0) return 0;
	// recursive case
	int ans = 0;
	for(int i = 1; i <= k and i <= n; i++){
		ans += num_of_ways(n-i, k);
	}
	return ans;
}
int num_of_ways_td(int n, int k, int * dp){
	if(dp[n] != -1) return dp[n];
	// base case
	if(n == 0) return dp[0] = 1;
	if(n < 0) return 0;
	// recursive case
	int ans = 0;
	for(int i = 1; i <= k and i <= n; i++){
		ans += num_of_ways_td(n-i, k, dp);
	}
	return dp[n] = ans;
}
int num_of_ways_bu(int n, int k){
	vector<int> v(n+1);
	v[0] = 1;
	for(int curr_step = 1; curr_step <= n; curr_step++) // n iterations
		for(int jump = 0; jump <= k and jump <= curr_step; jump++) // k iterations
			v[curr_step] += v[curr_step - jump];
		
	return v[n];
}
int num_of_ways_bu_opt(int n, int k){
	if(n == 0) return 1;
	vector<int> v(n+1);
	v[0] = 1;
	v[1] = 1;
	int cs = 2;
	for(; cs <= n and cs <= k; cs++){
		v[cs] = 2*v[cs-1];
	}
	for(; cs <= n; cs++){
		v[cs] = 2*v[cs - 1] - v[cs - k - 1];
		// v[cs] = 2*v[cs - 1] - (cs >= k + 1 ? v[cs-k-1] : 0);
		// if(cs - k - 1 >= 0) v[cs] -= v[cs - k - 1];
	}	
	return v[n];
}
int main(){
	int n = 100, k = 3;
	// vector<int> v(n+1, -1);
	int * arr = new int[n+1];
	memset(arr, -1, (n+1)*4);
	cout<<num_of_ways_td(n, k, arr)<<endl;

	cout<<num_of_ways_bu_opt(n, k)<<endl;
	// for(int i = 0; i <= n; i++){
	// 	cout<<arr[i]<<" ";
	// }cout<<endl;
	return 0;
}