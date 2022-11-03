#include<iostream>
using namespace std;
int main(){

	int arr[3] = {1, 2, 3};
	// int n = sizeof(arr) / sizeof(int);
	int n = sizeof(arr) / sizeof(arr[0]);


	for(int i = 0; i < 10; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	// for(int i = 0; i < n; i++){
	// 	cin>>arr[i];
	// }

	for(int i = 0; i < 10; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	return 0;
}