#include<iostream>
using namespace std;
void print_subarray(int arr[], int n){
	cout<<"[ ]\n";
	for(int i = 0; i < n; i++){ // i = n-1
		for(int j = i; j < n; j++){ // j = n
			// for(int k = i; k <= j; k++){
			// 	cout<<arr[k]<<" ";
			// }cout<<endl;
			cout<<"["<<arr[i];
			for(int k = i+1; k <= j; k++){
				cout<<", "<<arr[k];
			}
			cout<<"]\n";
		}
	}
}
int main(){
	int arr[1000];
	int n;
	cin>>n;
	// n = 5;
	// int arr[n] = {0};
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	print_subarray(arr, n);
	return 0;
}