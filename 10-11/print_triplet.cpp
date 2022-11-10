#include<iostream>
using namespace std;
void print_triplet(int arr[], int n){
	for(int i = 0; i < n-2; i++){ // i = n-3
		for(int j = i+1; j < n-1; j++){ // j = n-2
			for(int k = j+1; k < n; k++){ // k = n-1
				cout<<"("<<arr[i]<<", "<<arr[j]<<", "<<arr[k]<<")\n";
			}
		}
	}
}
int main(){
	int arr[100];
	int n;
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	print_triplet(arr, n);
	return 0;
}