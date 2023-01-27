#include<iostream>
using namespace std;
int fibo_rec(int n){
	if(n <= 1) return n;
	return fibo_rec(n-1) + fibo_rec(n-2);
}
int top_down(int n, int arr[]){
	if(arr[n]!=-1) 
		return arr[n];
	// if(n <= 1) {
	// 	arr[n] = n;
	// 	return n;
	// }
	arr[n] = top_down(n-1, arr) + arr[n-2];
	return arr[n];
}
int bottom_up(int n){
	int f[100000];
	f[0] = 0;
	f[1] = 1;
	for(int i = 2; i <= n; i++){
		f[i] = f[i-1] + f[i-2];
	}
	return f[n];
}
int fibo_dp(int n){
	int a = 0, b = 1, c;
	for(int i = 2; i <= n; i++){
		c = a+b;
		a = b;
		b = c;
	}
	return c;
}
int main(){
	int n = 40;
	int arr[100000];
	memset(arr, -1, sizeof(arr));
	arr[0] = 0;
	arr[1] = 1;
	cout<<top_down(n, arr)<<endl;
	cout<<bottom_up(n)<<endl;
	cout<<fibo_dp(n)<<endl;
	return 0;
}