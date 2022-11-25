#include<iostream>
using namespace std;
int main(){
	// syntax
	// datatype identifier[no of rows][no of cols];
	// datatype identifier[no of 1D arrays][no of buckets in one array];
	int arr[3][3];
	// cout<<sizeof(arr)<<endl; // 36
	arr[0][2] = 2;
	arr[1][2] = 12;
	arr[2][2] = 22;
	arr[0][0] = 0;
	arr[0][1] = 1;
	arr[0][2] = 2;
	cout<<arr[0][0]<<endl;
	cout<<arr[0][1]<<endl;
	cout<<arr[0][2]<<endl;
	return 0;
}