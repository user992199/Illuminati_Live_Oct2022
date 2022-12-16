#include<iostream>
using namespace std;
void print(int **arr, int m, int n){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			arr[i][j] = i*n + j;
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout<<arr[i][j]<<" ";
		}cout<<endl;
	}
}
int main(){
	int r = 5, c = 3;
	int **arr = new int*[r];
	for(int i = 0; i < r; i++){
		arr[i] = new int[c];
	}
	print(arr, r, c);
	for(int i = 0; i < r; i++){
		delete []arr[i];
	}
	delete []arr;
	return 0;
}