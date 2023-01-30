#include<iostream>
using namespace std;
int min_op_td(int n, int arr[]){
	// base case
	// return se pehle store
	if(n == 1) return arr[1] = 0;

	// recursive case
	// calculate se pehle check
	if(arr[n] != -1) return arr[n];
	int m1, m2, m3;
	m1 = m2 = m3 = INT_MAX;
	if(n-1 > 1)
		m1 = min_op_td(n-1, arr);
	if(n%2 == 0){
		m2 = min_op_td(n/2, arr);
	}
	if(n%3 == 0){
		m3 = min_op_td(n/3, arr);
	}
	// return se pehle store
	return arr[n] = min(m3, min(m2, m1)) + 1;
}
int min_op_rec(int n){
	if(n == 1) return 0;
	int m1, m2, m3;
	m1 = m2 = m3 = INT_MAX;
	if(n%3 == 0){
		m3 = min_op_rec(n/3);
	}
	if(n%2 == 0){
		m2 = min_op_rec(n/2);
	}
	if(n-1 > 1)
		m1 = min_op_rec(n-1);
	return min(m3, min(m2, m1)) + 1;
}
int min_op_bu(int n){
	int * dp = new int[n+1];
	dp[1] = 0;
	for(int i = 2; i <= n; i++){
		int op1 = dp[i-1];
		int op2 = INT_MAX, op3 = INT_MAX;
		if(i % 2 == 0) op2 = dp[i/2];
		if(i % 3 == 0) op3 = dp[i/3];
		dp[i] = min(op1, min(op2, op3)) + 1;
	}
	for(int i = 1; i <= n; i++)
		cout<<dp[i]<<" ";
	cout<<endl;
	return dp[n];

	for(int i = 2; i <= n; i++){
		dp[i] = min(dp[i-1], min( 
			i%2 == 0 ? dp[i/2] : INT_MAX, 
			i%3 == 0 ? dp[i/3] : INT_MAX 
			)) + 1;
	}
}
int main(){
	int n = 14;
	int arr[100000];
	memset(arr, -1, sizeof(arr));
	cout<<min_op_td(n, arr)<<endl;
	cout<<min_op_bu(n)<<endl;
	return 0;
}