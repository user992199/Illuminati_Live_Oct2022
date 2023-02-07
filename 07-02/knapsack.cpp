#include<iostream>
#include<vector>
#define vvi vector< vi >
#define vi vector<int>
using namespace std;
int knap(int * p, int *w, int n, int c){
	// base case
	if(n == 0) return 0;
	// recursive case
	if(w[n-1] > c) return knap(p, w, n-1, c);
	else{
		int op1 = knap(p, w, n-1, c);
		int op2 = knap(p, w, n-1, c-w[n-1]) + p[n-1];
		return max(op1, op2);
	}
}
int ktd(int * p, int *w, int n, int c, vvi &dp){
	if(dp[n][c] != -1) return dp[n][c];
	// base case
	if(n == 0) return dp[n][c] = 0;
	// recursive case
	if(w[n-1] > c) return knap(p, w, n-1, c);
	else{
		int op1 = ktd(p, w, n-1, c, dp);
		int op2 = ktd(p, w, n-1, c-w[n-1], dp) + p[n-1];
		return dp[n][c] = max(op1, op2);
	}
}
int kbu(int * p, int * w, int n, int c){
	vvi dp(n+1, vi (c+1, 0));
	for(int num = 1; num <= n; num++){
		for(int cap = 1; cap <= c; cap++){
			if(w[num-1] > cap){
				dp[num][cap] = dp[num-1][cap];
			}else{
				dp[num][cap] = max(
					dp[num-1][cap],
					dp[num-1][cap-w[num-1]] + p[num-1]
				);
			}
		}
	}
	return dp[n][c];
}
int main(){
	int p[] = {5, 5, 8, 6};
	int w[] = {3, 3, 4, 5};
	int n = 4;
	int c = 6;
	vvi dp(n+1, vi (c+1, -1));
	cout<<knap(p, w, n, c)<<endl;
	cout<<ktd(p, w, n, c, dp)<<endl;
	cout<<kbu(p, w, n, c)<<endl;
	return 0;
}