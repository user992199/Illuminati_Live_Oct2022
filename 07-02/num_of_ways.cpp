#include<iostream>
#include<vector>
#define vvi vector< vi >
#define vi vector<int>
using namespace std;
int now(int m, int n, vvi &maze){
	vvi dp(m, vi(n, 1));
	for(int i = 1; i < m; i++){
		for(int j = 1; j < n; j++){
			// if(maze[i][j] == 1) {
			// 	dp[i][j] = -1;
			// 	continue;
			// }
			int op1 = 0, op2 = 0;
			if(maze[i-1][j] == 0)
				op1 = dp[i-1][j];
			if(maze[i][j-1] == 0)
				op2 = dp[i][j-1];
			dp[i][j] = op1 + op2;
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout<<dp[i][j]<<" ";
		}cout<<endl;
	}
	return dp[m-1][n-1];
}
int now_2(int m, int n){
	vvi dp(m, vi(n, 1));
	for(int i = 1; i < m; i++){
		for(int j = 1; j < n; j++){
			dp[i][j] = dp[i-1][j] + dp[i][j-1] + dp[i-1][j-1];
		}
	}
	return dp[m-1][n-1];
}
int main(){
	int m = 4, n = 4;
	vvi maze(m, vi(n, 0));
	maze[1][2] = 1;
	maze[1][3] = 1;
	maze[3][0] = 1;
	maze[3][1] = 1;
	// cout<<now(m, n, maze)<<endl;
	cout<<now_2(m, n)<<endl;
	return 0;
}