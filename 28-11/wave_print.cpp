#include<iostream>
using namespace std;
void wave_print(int arr[4][4], int m, int n){
	int row = 0, col = 0;
	while(col < n){
		if(col % 2){
			row = m - 1;
			while(row >= 0){
				cout<<arr[row--][col]<<" ";
			}
		}else{
			row = 0;
			while(row < m){
				cout<<arr[row++][col]<<" ";
			}
		}
		col++;
	}
	cout<<endl;
}
int main(){
	int arr[4][4] = {
		{1, 3, 8, 11},
		{2, 6, 9, 15},
		{4, 10, 19, 21},
		{5, 12, 20, 25}
	};
	int m = 4, n = 4;
	wave_print(arr, m, n);
	return 0;
}