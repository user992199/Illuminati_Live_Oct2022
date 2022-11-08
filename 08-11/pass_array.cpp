#include<iostream>
using namespace std;
// syntax
// void pa(data_type identifier[])
// void pa(data_type identifier[number_of_buckets])
void print_array(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}

void increment_by_10(int arr[], int n){
	for(int i = 0; i < n; i++){
		arr[i] += 10;
	}
	cout<<"array inside IB10: ";
	print_array(arr, n);
}

int main(){
	int arr[] = {10, 9, 8, 1, 2, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	// syntax for passing an array
	// pa(identifier of array);
	print_array(arr, n);
	increment_by_10(arr, n);
	cout<<"array inside main: ";
	print_array(arr, n);
	return 0;
}