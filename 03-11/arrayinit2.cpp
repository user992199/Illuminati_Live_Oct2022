#include<iostream>
using namespace std;
int main(){
	// syntax
	// Second method
	// datatype identifier[] = {1, 2, 3, 4, 5};

	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 124, 34, 234, 14,1, 3524,5, 3453};
	// int n = sizeof(arr) / sizeof(int);
	int n = sizeof(arr) / sizeof(arr[0]);


	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	// for(int i = 0; i < n; i++){
	// 	cin>>arr[i];
	// }

	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	return 0;
}