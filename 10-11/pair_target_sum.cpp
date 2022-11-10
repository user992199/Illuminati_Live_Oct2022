#include<iostream>
using namespace std;
void pair_target_sum(int arr[], int n, int t){
	for(int i = 0; i < n; i++){ // i = n-1
		int x = t-arr[i];
		for(int j = i+1; j < n; j++){ // j = 
			if(arr[j] == x){
				cout<<"("<<arr[i]<<", "<<arr[j]<<")\n";
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
	int target;
	cin>>target;
	pair_target_sum(arr, n, target);
	return 0;
}