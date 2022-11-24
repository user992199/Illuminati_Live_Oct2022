#include<iostream>
using namespace std;
void print(int arr[], int n ){
	for(int i = 0; i < n ; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
bool compare(int a, int b){
	return a>b;
}
int main(){
	int arr[] = {23, 12, 5,4, 6,7 ,789 ,34, 5,6, 89, 46,231, 4,246, 4,68 };
	int n = sizeof(arr)/sizeof(arr[0]);
	sort(arr, arr+n, compare);
	print(arr, n);
	return 0;
}