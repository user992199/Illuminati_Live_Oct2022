#include<iostream>
using namespace std;
int main(){
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0; i <= n-2; i++){
		int min = i;
		for(int j = i; j < n; j++){
			if(arr[min] > arr[j]){
				min = j;
			}
		}
		swap(arr[i], arr[min]);
	}
	for(int i = 0; i < n ; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	return 0;
}