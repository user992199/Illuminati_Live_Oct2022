#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
int lcs(string s1, string s2, int m, int n){
	// base case
	if(m == 0 or n == 0) return 0;
	// recursive case
	if(s1[m-1] == s2[n-1]) return lcs(s1, s2, m-1, n-1)+1;
	else{
		return max(lcs(s1, s2, m-1, n), lcs(s1, s2, m, n-1));
	}
}
int lcs_td(string s1, string s2, int m, int n, vector<vector<int> > &dp){
	// base case
	if(m == 0 or n == 0) return dp[m][n] = 0;
	if(dp[m][n] != -1) return dp[m][n];
	// recursive case
	if(s1[m-1] == s2[n-1]) return dp[m][n] = lcs_td(s1, s2, m-1, n-1, dp)+1;
	else{
		return dp[m][n] = max(lcs_td(s1, s2, m-1, n, dp), lcs_td(s1, s2, m, n-1, dp));
	}
}
int lcs_bu(string s1, string s2){
	int m = s1.size();
	int n = s2.size();
	vector<vector<int> > dp(m + 1, vector<int> (n+1, 0));
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			if(s1[i-1] == s2[j-1]){
				dp[i][j] = dp[i-1][j-1] + 1;
			}else{
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			}
		}
	}
	return dp[m][n];
}
int main(){
	string s1 = "Tuesday", s2 = "Thursday";
	vector<vector<int> > dp(s1.size() + 1, vector<int> (s2.size()+1, -1));
	cout<<lcs(s1, s2, s1.size(), s2.size())<<endl;
	cout<<lcs_td(s1, s2, s1.size(), s2.size(), dp)<<endl;
	cout<<lcs_bu(s1, s2)<<endl;
	// for(int i = 0; i <= s1.size(); i++){
	// 	for(int j = 0; j <= s2.size(); j++){
	// 		cout<<dp[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	return 0;
}