#include<iostream>
using namespace std;
void prnt_arr(int arr[], int n){
	for(int i = 0; i < n ; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
void m2sa(int arr1[], int arr2[], int m, int n){
	int i = 0, j = 0;
	for(; i < m-n+j and j < n; i++){
		if(arr1[i]>arr2[j]){
			// shifting the array by 1 
			// to the right starting from ith index
			for(int k = m-1; k > i; k--){
				arr1[k] = arr1[k-1];
			}
			// arr1[i] = arr2[j];
			arr1[i] = arr2[j];
			j++;
		}
	}
	while(j < n){
		arr1[i++] = arr2[j++];
	}
}
int main(){
	int arr1[10] = {1, 3};
	int arr2[8] = {2, 4, 6, 8, 10, 12, 14, 16};
	int m = sizeof(arr1)/sizeof(arr1[0]);
	int n = sizeof(arr2)/sizeof(arr2[0]);
	m2sa(arr1, arr2, m, n);
	prnt_arr(arr1, m);
	return 0;
}