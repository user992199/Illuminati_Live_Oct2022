#include<iostream>
using namespace std;
int bin_sea(int arr[], int s, int e, int key){
	// base case
	if(s > e) return -1;
	// recursive case
	int m = (s+e)/2;
	if(arr[m] == key) return m;
	else if(arr[m] > key) return bin_sea(arr, s, m-1, key); 
	else return bin_sea(arr, m+1, e, key); 
}
int main(){
	int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	int n = sizeof(arr)/sizeof(arr[0]);
	int key = 374;
	cout<<bin_sea(arr, 0, n-1, key)<<endl;
	return 0;
}