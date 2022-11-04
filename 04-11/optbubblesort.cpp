#include<iostream>
using namespace std;
int main(){
	int arr[] = {1, 5, 1, 34, 7, 23, -10, 18, 19, 432, 1};
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
	int i = 1;
	for(; i <= n-1; i++){
		int count = 0;
		// inner loop
		for(int j = 0; j <= n - i - 1; j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j], arr[j+1]);
				count = 1;
			}
		}
		if(!count){ // (count == 0)
			i++;
			break;
		}
	}
	cout<<"Number of passes: "<<i-1<<endl;
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	return 0;
}



// Problem Link: https://hack.codingblocks.com/app/contests/3687/64/problem

// My solution: https://ide.codingblocks.com/s/677090

// My Doubt:
