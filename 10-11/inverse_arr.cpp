#include<iostream>
using namespace std;
void print_arr(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
void inverse_arr(int arr[], int n){
	int temp_arr[1000];
	for(int i = 0; i < n; i++){
		temp_arr[arr[i]] = i;
	}
	for(int i = 0; i < n; i++){
		arr[i] = temp_arr[i];
	}
}
int main(){
	// int n;
	// cin>>n;
	int arr[] = {4, 3, 0, 1, 2};
	int n = sizeof(arr)/sizeof(arr[0]);
	inverse_arr(arr, n);
	print_arr(arr, n);
	inverse_arr(arr, n);
	print_arr(arr, n);
	return 0;
}