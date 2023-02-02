#include<iostream>
using namespace std;
bool check_7(int arr[], int n){
	// base case
	if(n==0) return false;
	// recursive case
	return arr[n-1] == 7 or check_7(arr, n-1);
}
int first_7(int arr[], int n, int i){
	// base case
	if(i == n) return -1;
	// recursive case
	return arr[i] == 7 ? i : first_7(arr, n, i+1);
}
int last_7(int arr[], int n){
	// base case
	if(n == 0) return -1;
	// recursive case
	return arr[n-1] == 7 ? n-1 : last_7(arr, n-1);
}
void print_all_index(int arr[], int n){
	// base case
	if(n == 0) return;
	// recursive case
	print_all_index(arr, n-1);
	if(arr[n-1] == 7)  cout<<n-1<<" ";
}
int main(){
	int arr[] = {12, 7, 7, 7, 7, 7, 7, 7,7 ,7, 18};
	int n = sizeof(arr)/sizeof(arr[0]);
	if(check_7(arr, n)){
		cout<<"First occurence of 7 is @ "
		<<first_7(arr, n, 0)<<endl;
		cout<<"Last occurence of 7 is @ "
		<<last_7(arr, n)<<endl;
		cout<<"All index where arr[index] == 7 :-\n";
		print_all_index(arr, n);
		cout<<endl;
	}else{
		cout<<"7 is not present in the array\n";
	}
	return 0;
}