#include<iostream>
using namespace std;
int sum_of_arr(int arr[], int n){
	// base case
	if(n==1) return arr[0];
	// recursive case
	return arr[n-1] + sum_of_arr(arr, n-1);
}
int main(){
	int arr[] = {1, 2, 3, 4 , 5, 6, 7};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<sum_of_arr(arr, n)<<endl;
	return 0;
}