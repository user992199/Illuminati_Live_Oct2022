#include<iostream>
using namespace std;
int main(){
	int arr[] = {2, 4, 5, 6, 1, 3};
	int n = sizeof(arr)/sizeof(arr[0]);
	// int n;
	// cin>>n;
	// int arr[10000];
	// for(int i = 0; i < n; i++){
	// 	cin>>arr[i];
	// }
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	// outer loop
	for(int i = 1; i <= n-1; i++){
		// inner loop
		for(int j = 0; j <= n - i - 1; j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j], arr[j+1]);
			}
		}
	}
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	return 0;
}