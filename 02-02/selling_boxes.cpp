#include<iostream>
#include<vector>
using namespace std;
int sell(int * boxes, int n, int s, int e){
	// base case
	if(s>e) return 0;
	// recursive case
	int cd = n-e+s;
	int op1 = sell(boxes, n, s+1, e) + boxes[s] * cd;
	int op2 = sell(boxes, n, s, e-1) + boxes[e] * cd;
	return max(op1, op2);
}
int sell_td(int * boxes, int profit[][1002], int n, int s, int e){
	// base case
	if(s>e) return profit[s][e] = 0;
	// recursive case
	if(profit[s][e] != -1) return profit[s][e];
	int cd = n-e+s;
	int op1 = sell_td(boxes, profit, n, s+1, e) + boxes[s] * cd;
	int op2 = sell_td(boxes, profit, n, s, e-1) + boxes[e] * cd;
	return profit[s][e] = max(op1, op2);
}
int sell_bu(vector<int> &boxes, int n){
	vector<vector<int> > v(n, vector<int> (n, 0));
	for(int i = 0; i < n; i++){
		v[i][i] = boxes[i] * n;
	}
	for(int s = n-2; s >= 0; s--){
		for(int e = s+1; e < n; e++){
			// if(s == e) {
			// 	v[s][e] = boxes[e] * n;
			// }
			// else if(s < e){
				int cd = n - e + s;
				v[s][e] = max(
					v[s+1][e] + boxes[s] * cd, 
					v[s][e-1] + boxes[e] * cd
					);
			// }
		}
	}
	return v[0][n-1];
}
int main(){
	int boxes[1000];
	int n = sizeof(boxes)/sizeof(boxes[0]);
	int profit[1002][1002];
	for(int i = 0; i < n; i++){
		boxes[i] = 1;
	}
	memset(profit, -1, sizeof(profit));
	cout<<sell_td(boxes, profit, n, 0, n-1)<<endl;
	vector<int> v(1000, 1);
	cout<<sell_bu(v, n)<<endl;
	return 0;
}