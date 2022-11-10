#include<iostream>
using namespace std;
void target_triplet_sum(int arr[], int n, int target){
	for(int i = 0; i < n-2; i++){ // i = n-3
		int x1 = target - arr[i];
		for(int j = i+1; j < n-1; j++){ // j = n-2
			int x2 = x1 - arr[j];
			for(int k = j+1; k < n; k++){ // k = n-1
				if(arr[k] == x2)
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
	int target;
	cin>>target;
	target_triplet_sum(arr, n, target);
	return 0;
}