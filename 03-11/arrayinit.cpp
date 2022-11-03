#include<iostream>
using namespace std;
int main(){
	// syntax
	// First method
	// datatype identifier[no of bucket] = {1, 2, 3, 4, 5};

	int arr[5] = {1, 2, 3, 4, 5};


	for(int i = 0; i < 5; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	for(int i = 0; i < 5; i++){
		cin>>arr[i];
	}

	for(int i = 0; i < 5; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	return 0;
}