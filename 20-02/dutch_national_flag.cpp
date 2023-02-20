#include<iostream>
using namespace std;
void print(int * arr, int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
void dnf(int * arr, int n){
	int z = 0, i = 0, t = n-1;
	while(i < t){
		switch(arr[i]){
		case 0:
			swap(arr[z++], arr[i++]);
			break;
		case 1:
			i++;
			break;
		case 2:
			swap(arr[i], arr[t--]);
			break;
		}
	}
}
int main(){
	int arr[] = {0, 1, 2, 1, 1, 2, 0, 1, 0, 1, 2, 2};
	int n = sizeof(arr)/sizeof(arr[0]);
	print(arr, n);
	dnf(arr, n);
	print(arr, n);
	return 0;
}