#include<iostream>
using namespace std;
void print_low_tri(int arr[1000][1000], int rn, int cn){
	cout<<"First Triangle:-\n";
	for(int row = 0; row < rn; row++){
		for(int col = 0; col <= row; col++){
			cout<<arr[row][col]<<"\t";
		}cout<<endl;
	}
	cout<<"\nSecond Triangle:-\n";
	for(int row = 0; row < rn; row++){
		for(int col = 0; col < cn; col++){
			if(row > col) cout<<"\t";
			else cout<<arr[row][col]<<"\t";
		}cout<<endl;
	}
	cout<<"\nThird Triangle:-\n";
	for(int row = 0; row < rn; row++){
		for(int col = 0; col < cn; col++){
			if(row > cn - col - 1) cout<<"\t";
			else cout<<arr[row][col]<<"\t";
		}cout<<endl;
	}
	cout<<"\nFourth Triangle:-\n";
	for(int row = 0; row < rn; row++){
		for(int col = 0; col < cn; col++){
			if(row < cn - col - 1) cout<<"\t";
			else cout<<arr[row][col]<<"\t";
		}cout<<endl;
	}
}
void init_mat(int mat[1000][1000], int rn, int cn){
	for(int row = 0; row < rn; row++){
		for(int col = 0; col < cn; col++){
			mat[row][col] = row*rn+col;
		}
	}
	// for(int row = 0; row < rn; row++){
	// 	for(int col = 0; col < cn; col++){
	// 		cout<<mat[row][col]<<"\t";
	// 	}cout<<endl;
	// }
}
int main(){
	int arr[1000][1000];
	int rn = 5, cn = 5;
	init_mat(arr, rn, cn);
	print_low_tri(arr, rn, cn);
	return 0;
}