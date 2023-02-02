#include<iostream>
using namespace std;
void print(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
void bsp(int arr[], int n, int i){ // initialization
	// base case
	if(i == n-1) return; // condition check
	// for(int i = 0; i < n-1; i++){
	for(int j = 0; j < n-i-1; j++)
		if(arr[j] > arr[j+1]) 
			swap(arr[j], arr[j+1]);
	// recursive case
	bsp(arr, n, i+1); // updation
}
int main(){
	int arr[] = {5, 4, 3, 2, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	print(arr, n);
	bsp(arr, n, 0);
	print(arr, n);
	return 0;
}