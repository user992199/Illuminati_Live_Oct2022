#include<iostream>
using namespace std;
int bin_src(int arr[], int n, int key, int &it){
	it = 0;
	int s = 0, e = n-1;
	while(s<=e){
		it++;
		int m = (s+e)/2;
		if(arr[m] == key){
			return m;
		}
		else if(arr[m] > key){
			e = m-1;
		}else if(arr[m] < key){
			s = m+1;
		}
	}
	return -1;
}
int lin_src(int arr[], int n, int key, int &it){
	it = 0;
	for(int i = 0; i < n; i++){
		it++;
		if(arr[i] == key){
			return i;
		}
	}
	return -1;
}
int main(){
	int arr[1000000];
	int n = sizeof(arr)/sizeof(int);
	for(int i = 0; i < n; i++){
		arr[i] = i;
	}
	int key = 1000000;
	int it = 0;
	cout<<bin_src(arr, n, key, it)<<" "<<it<<endl;
	cout<<lin_src(arr, n, key, it)<<" "<<it<<endl;
	return 0;
}