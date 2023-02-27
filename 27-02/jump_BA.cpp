#include<iostream>
#include<vector>
using namespace std;
void find_factors(int n, vector<vector<int> > & f){
	for(int i = 2; i <= n/2; i++){
		for(int multiple = i * 2; multiple <= n; multiple += i){
			f[multiple].push_back(i);
		}
	}
}
void find_ways(vector<int> & ways, int n){
	int mod = 1000000007;
	vector<vector<int> > factors(n, vector<int> (1, 1));
	find_factors(n, factors);
	for(int i = 2; i <= n; i++){
		for(int j = 0; j < factors[i].size(); j++){
			ways[i] = (ways[i] + (ways[i - factors[i][j]]%mod))%mod;
		}
	}
}
int main(){
	int max_n = 100001;
	vector<int> ways(max_n);
	ways[1] = 1;
	find_ways(ways, max_n);
	int t = 11;
	while(t--){
		int n = t;
		cout<<ways[n]<<endl;
	}
	return 0;
}