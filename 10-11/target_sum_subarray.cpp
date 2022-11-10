#include<iostream>
using namespace std;
void print_subarray(int arr[], int s, int e){
	cout<<"["<<arr[s];
	for(int k = s+1; k <= e; k++){
		cout<<", "<<arr[k];
	}
	cout<<"]\n";
}
void target_sum_subarray(int arr[], int n, int target){
	if(target == 0){
		cout<<"[ ]\n";
	}
	for(int i = 0; i < n; i++){ // i = n-1
		for(int j = i; j < n; j++){ // j = n
			int sum = 0;
			for(int k = i; k <= j; k++){
				sum += arr[k];
			}
			if(sum == target){
				print_subarray(arr, i, j);
			}
		}
	}
}
int main(){
	int arr[1000];
	int n, target;
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	cin>>target;
	target_sum_subarray(arr, n, target);
	return 0;
}