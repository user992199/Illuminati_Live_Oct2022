#include<iostream>
using namespace std;
void prnt_arr(int arr[], int n){
	for(int i = 0; i < n ; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
void selection_sort(int arr[], int n){
	for(int i = 0; i <= n-2; i++){
		int min = i;
		for(int j = i; j < n; j++){
			if(arr[min] > arr[j]){
				min = j;
			}
		}
		swap(arr[i], arr[min]);
	}
}
int main(){
	int arr[] = {10, 123, 435,2, 12, 54, 64, 23,98};
	int n = sizeof(arr)/sizeof(arr[0]);
	prnt_arr(arr, n);
	selection_sort(arr, n);
	prnt_arr(arr, n);
	return 0;
}