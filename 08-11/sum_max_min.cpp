#include<iostream>
using namespace std;
void print_array(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
int sumarr(int arr[], int n){
	int sum = arr[0];
	for(int i = 1; i < n; i++){
		sum += arr[i];
	}
	return sum;
}
int maxarr(int arr[], int n){
	int max = arr[0];
	for(int i = 1; i < n; i++)
		if(arr[i] > max)
			max = arr[i];
	return max;
}
int minarr(int arr[], int n){
	int min = arr[0];
	for(int i = 1; i < n; i++)
		if(arr[i] < min)
			min = arr[i];
	return min;
}
int main(){
	int arr[] = {10, 123, 756, 423, 87, 345};
	int n = sizeof(arr)/sizeof(arr[0]);
	print_array(arr, n);
	// sort(identifier, identifier + size);
	sort(arr, arr + n);
	print_array(arr, n);
	//for decreasing order
	// sort(identifier, identifier + size, greater<data_type>());
	sort(arr, arr + n, greater<int>());
	print_array(arr, n);
	cout<<sumarr(arr, n)<<endl;
	cout<<maxarr(arr, n)<<endl;
	cout<<minarr(arr, n)<<endl;
	return 0;
}