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
	while(sr <= er and sc <= ec){ // 1 <= 1 and 1 <= 3
		for(int j = sc; j <= ec; j++){
			cout<<arr[sr][j]<<" ";
		}sr++; // 2
		cout<<endl; 
		if(sr>er){ // sr > er => 2 > 1
			break;
		}
		for(int i = sr; i <= er; i++){
			cout<<arr[i][ec]<<"\n";
		}ec--;
		if(sc>ec){ // 0 > 3
			break;
		}
		for(int j = ec; j >= sc; j--){
			cout<<arr[er][j]<<" ";
		}er--;
		cout<<endl;
		if(sr>er){ // sr > er // 1 > 1
			break;
		}
		for(int i = er; i >= sr; i--){
			cout<<arr[i][sc]<<"\n";
		}sc++; // sc = 1
	}
	cout<<endl;
}
int main(){
	int m = 3, n = 5;
	int arr[100][100];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			arr[i][j] = i*n+j+1;
		}
	}
	print_mat(arr, m, n);
	spiral_print(arr, m, n);
}