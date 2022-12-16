#include<iostream>
using namespace std;
void print_sieve(int arr[], int n){
	for(int i = 2; i <= n; i++){
		if(arr[i] == 1)	cout<<i<<" ";
	}cout<<endl;
}
void sieve(int arr[], int n){
	arr[2] = 1;
	for(int i = 3; i <= n; i+=2) arr[i] = 1;
	for(int i = 3; i*i <= n; i+=2){
		if(arr[i] == 0) continue;
		for(int j = i*i; j <= n; j+=i*2) 
			arr[j] = 0;
	}
	print_sieve(arr, n);
}
int main(){
	int n = 9999;
	int arr[10000] = {0};
	sieve(arr, n);
	return 0;
}