#include<iostream>
using namespace std;
int min_op(int n, int arr[]){
	if(arr[n] != -1) return arr[n];
	if(n == 1) return arr[1] = 0;
	int m1, m2, m3;
	m1 = m2 = m3 = INT_MAX;
	if(n%3 == 0){
		m3 = min_op(n/3, arr);
	}
	if(n%2 == 0){
		m2 = min_op(n/2, arr);
	}
	if(n-1 > 1)
		m1 = min_op(n-1, arr);
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
int main(){
	int n = 10000;
	int arr[100000];
	memset(arr, -1, sizeof(arr));
	cout<<min_op(n, arr)<<endl;
	// cout<<min_op_rec(n)<<endl;
	return 0;
}