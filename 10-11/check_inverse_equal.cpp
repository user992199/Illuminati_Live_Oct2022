#include<iostream>
using namespace std;
void print_arr(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
bool inverse_arr(int arr[], int n){
	for(int i = 0; i < n; i++){
		if(arr[arr[i]] != i){
			return false;
		}
	}
	return true;
	// int temp_arr[1000];
	// for(int i = 0; i < n; i++){
	// 	temp_arr[arr[i]] = i;
	// }
	// for(int i = 0; i < n; i++){
	// 	if(arr[i] != temp_arr[i])
	// 		return false;
	// }
	// return true;
}
int main(){
	// int n;
	// cin>>n;
	int arr[] = {3, 5, 2, 0, 6, 1, 4};
	int n = sizeof(arr)/sizeof(arr[0]);
	if(inverse_arr(arr, n)){
		cout<<"Yes\n";
	}else{
		cout<<"No\n";
	}
	return 0;
}