#include<iostream>
using namespace std;
void print_mat(int arr[100][100], int m, int n){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
}
void spiral_print(int arr[100][100], int m, int n){
	int sr = 0, er = m-1, sc = 0, ec = n-1;
	while(sr <= er and sc <= ec){
		for(int j = sc; j <= ec; j++){
			cout<<arr[sr][j]<<" ";
		}sr++;
		for(int i = sr; i <= er; i++){
			cout<<arr[i][ec]<<" ";
		}ec--;
		for(int j = ec; j >= sc; j--){
			cout<<arr[er][j]<<" ";
		}er--;
		for(int i = er; i >= sr; i--){
			cout<<arr[i][sc]<<" ";
		}sc++;
	}
	cout<<endl;
}
int main(){
	int m = 5, n = 1;
	int arr[100][100];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			arr[i][j] = i*n+j+1;
		}
	}
	print_mat(arr, m, n);
	spiral_print(arr, m, n);
}