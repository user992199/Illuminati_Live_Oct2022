#include<iostream>
using namespace std;
void print_subarray(int arr[], int s, int e){
	cout<<"["<<arr[s];
	for(int k = s+1; k <= e; k++){
		cout<<", "<<arr[k];
	}
	cout<<"]\n";
}
int max_subarr_sum(int arr[], int n){
	int max_sum = INT_MIN;
	for(int i = 0; i < n; i++){ // i = n-1
		for(int j = i; j < n; j++){ // j = n
			int sum = 0;
			for(int k = i; k <= j; k++){
				sum += arr[k];
			}
			if(sum > max_sum){
				max_sum = sum;
			}
		}
	}
	return max_sum;
}
int main(){
	int arr[1000];
	int n;
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	cout<<max_subarr_sum(arr, n)<<endl;
	return 0;
}