#include<iostream>
using namespace std;
int main(){
	int arrm[1000000];
	// syntax
	// Second method
	// datatype identifier[] = {1, 2, 3, 4, 5};

	int arr[10] = {1, 2, 3, 4, 5};
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