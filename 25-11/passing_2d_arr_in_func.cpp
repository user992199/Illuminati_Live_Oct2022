#include<iostream>
using namespace std;
void print_matrix(int arr[][1000], int rn, int cn){
	for(int row = 0; row < rn; row++){
		for(int col = 0; col < cn; col++){
			cout<<arr[row][col]<<" ";
		}cout<<endl;
	}
}
int main(){
	int arr[1000][1000];
	int rn, cn;
	cin>>rn>>cn;
	print_matrix(arr, rn, cn);
	return 0;
}