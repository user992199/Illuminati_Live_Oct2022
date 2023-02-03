#include<iostream>
#include<vector>
using namespace std;
int min_cost(int arr[][1000], int r, int c){
	// base case
	if(r == 0 and c == 0) return arr[0][0];
	else if(r < 0 or c < 0) return INT_MAX;
	// recursive case
	int op1 = min_cost(arr, r-1, c);
	int op2 = min_cost(arr, r, c-1);
	return min(op1, op2) + arr[r][c];
}
int min_cost_td(int arr[][1000], int r, int c, int cost[][1000]){
	// base case
	if(r == 0 and c == 0) return cost[0][0] = arr[0][0];
	else if(r < 0 or c < 0) return INT_MAX;
	if(cost[r][c] != -1) return cost[r][c];
	// recursive case
	int op1 = min_cost_td(arr, r-1, c, cost);
	int op2 = min_cost_td(arr, r, c-1, cost);
	return cost[r][c] = min(op1, op2) + arr[r][c];
}
int min_cost_bu(int arr[][1000], int r, int c){
	vector<vector<int> > cost(r, vector<int> (c, 0));
	// base case
	cost[0][0] = arr[0][0];
	for(int row = 1; row < r; row++){
		cost[row][0] = cost[row-1][0] + arr[row][0];
	}
	for(int col = 1; col < c; col++){
		cost[0][col] = cost[0][col-1] + arr[0][col];
	}
	for(int row = 1; row < r; row++){
		for(int col = 1; col < c; col++){
			cost[row][col] = 
				min(cost[row-1][col], cost[row][col-1]) 
				+ arr[row][col];
		}
	}
	return cost[r-1][c-1];
}
int main(){
	int arr[1000][1000] = {
		{1, 1, 0, 8}, 
		{4, 1, 1, 13}, 
		{3, 11, 1000, 17}, 
		{8, 20, 1, 1}
	};
	int r = 4, c = 4;
	int cost[1000][1000];
	memset(cost, -1, sizeof(cost));
	cout<<min_cost_td(arr, r-1, c-1, cost)<<endl;
	cout<<min_cost_bu(arr, r, c)<<endl;
	// cout<<min_cost(arr, r-1, c-1)<<endl;
	return 0;
}