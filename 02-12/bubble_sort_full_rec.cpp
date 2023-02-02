#include<iostream>
using namespace std;
void print(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
void bsf(int arr[], int n, int i, int j){ // initialization
	// base case
	if(i == n-1) return; // condition check
	if(j == n-i-1) bsf(arr, n, i+1, 0);
	else{
		if(arr[j] > arr[j+1]) 
			swap(arr[j], arr[j+1]);
		bsf(arr, n, i, j+1);
	}
}
int main(){
	int arr[] = {-10, 5, 4, 13, 3, 2, 1, 10};
	int n = sizeof(arr)/sizeof(arr[0]);
	print(arr, n);
	bsf(arr, n, 0, 0);
	print(arr, n);
	return 0;
}