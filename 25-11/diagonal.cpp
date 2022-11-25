#include<iostream>
using namespace std;
// void print(int arr[][5], int rn, int cn){

// }
int main(){
	int rn = 10, cn = 10;
	int mat[rn][cn];
	for(int row = 0; row < rn; row++){
		for(int col = 0; col < cn; col++){
			mat[row][col] = row*rn+col;
		}
	}
	for(int row = 0; row < rn; row++){
		for(int col = 0; col < cn; col++){
			cout<<mat[row][col]<<"\t";
		}cout<<endl;
	}
	// cout<<"diagonal 1:-\n";
	// for(int row = 0; row < rn; row++){
	// 	for(int col = 0; col < cn; col++){
	// 		if(row == col)
	// 			cout<<mat[row][col]<<" ";
	// 	}
	// }cout<<endl;
	// cout<<"diagonal 2:-\n";
	// for(int row = rn-1; row > -1; row--){
	// 	for(int col = 0; col < cn; col++){
	// 		if(row == cn - col - 1)
	// 			cout<<mat[row][col]<<" ";
	// 	}
	// }cout<<endl;
	cout<<"diagonal 1:-\n";
	for(int row = 0; row < rn; row++){
		cout<<mat[row][row]<<" ";
	}cout<<endl;
	cout<<"diagonal 2:-\n";
	for(int row = 0; row < rn; row++){
		cout<<mat[rn - row - 1][row]<<" ";
	}cout<<endl;
	cout<<"diagonal 3:-\n";
	for(int row = 0; row < rn; row++){
		cout<<mat[row][rn - row - 1]<<" ";
	}cout<<endl;
	return 0;
}