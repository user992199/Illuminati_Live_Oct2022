#include<iostream>
using namespace std;
int main(){
	int arr[][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
	
	cout << &arr + 2 <<endl;
	cout << arr << endl; // &&arr[0][0]
	cout << arr+1 << endl; // &arr[1][0]
	cout << *(arr+1) + 1 << endl; // &arr[1][1]
	cout << arr[1] << endl; // &arr[0][0]
	cout << *(arr[0]) << endl; // arr[0][0]
	cout << &arr[0][0] << endl; // arr[0]
	cout << arr[0] + 1 << endl; // &arr[0][1] 
	cout << (&arr[0][0]) + 1 << endl; // &arr[0][1]
	cout << &arr[1][0] << endl; // arr+1

	return 0;
}