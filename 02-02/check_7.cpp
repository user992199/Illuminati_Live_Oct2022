#include<iostream>
using namespace std;
bool check_7(int arr[], int n){
	// base case
	if(n==0) return false;
	// recursive case
	return arr[n-1] == 7 or check_7(arr, n-1);
}
int main(){
	int arr[] = {7, 2, 43, 56, 23, 56, 789, 45, 2, 9};
	int n = sizeof(arr)/sizeof(arr[0]);
	check_7(arr, n) ? cout<<"Yes\n" : cout<<"No\n";
	return 0;
}