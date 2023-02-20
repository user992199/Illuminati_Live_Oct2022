#include<iostream>
using namespace std;
int kadane(int * arr, int n){
	int cs = 0;
	int ms = INT_MIN;
	for(int i = 0; i < n; i++){
		cs += arr[i];
		ms = max(ms, cs);
		cs = max(cs, 0);
	}
	return ms;
}
int kadane_min(int * arr, int n){
	int cs = 0;
	int ms = INT_MAX;
	for(int i = 0; i < n; i++){
		cs += arr[i];
		ms = min(ms, cs);
		cs = min(cs, 0);
	}
	return ms;
}
int max_cir(int * arr, int n){
	int c1 = kadane(arr, n);
	int ts = 0;
	for(int i = 0; i < n; i++){
		ts += arr[i];
		arr[i] *= -1;
	}
	// int c2 = ts - kadane_min(arr, n);
	int c2 = ts + kadane(arr, n);
	return max(c1, c2);
}
int main(){
	int arr[] = {3, -2, 1, -5, 6, 3, -2, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<max_cir(arr, n)<<endl;
	return 0;
}