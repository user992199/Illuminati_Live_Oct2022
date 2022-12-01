#include<iostream>
using namespace std;
bool check_sorted(int arr[], int n, int i){
	// base case
	if(i == n-1) return true;
	// recursive case
	return arr[i]<=arr[i+1] and check_sorted(arr, n, i+1);
}
bool check_sorted_2(int arr[], int n){
	// base case
	if(n == 1) return true;
	// recursive case
	return arr[n-2]<=arr[n-1] and check_sorted_2(arr, n-1);
}
int main(){
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 8};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<check_sorted_2(arr, n)<<endl;
	return 0;
}