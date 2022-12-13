#include<iostream>
using namespace std;
void print(int arr[100][100], int n, int sn){
	cout<<"Solution "<<sn<<":-\n";
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			arr[i][j] == 1 ? cout<<"Q ": cout<<"# ";
		}
		cout<<endl;
	}
}
bool check_valid(int b[100][100], int i, int j, int n){
	// check column
	for(int row = 0; row < i; row++)
		if(b[row][j] == 1) return false;
	// check left diagonal
	for(int row = i-1, col = j-1; row >= 0 and col >= 0; row--, col--)
		if(b[row][col] == 1) return false;
	// check right diagonal
	for(int row = i-1, col = j+1; row >= 0 and col < n; row--, col++)
		if(b[row][col] == 1) return false;
	// the block is valid
	return true;
}
bool n_queens(int b[100][100], int n, int i, int &sn){
	// base case
	if(i == n) {
		print(b, n, ++sn);
		// return false; // prints all solutions
		return true; // prints only one solution
	}
	// recursive case
	for(int j = 0; j < n; j++){
		if(!check_valid(b, i, j, n)) continue; // to check whther current block is available for queen placement
		b[i][j] = 1; // queen placement
		// bool valid = n_queens(b, n, i+1, sn); // placing queens from next row
		if(n_queens(b, n, i+1, sn)) return true; // if all queens placed, return true
		b[i][j] = 0; // if all queens not placed, backtrack
	}
	return false;
}
int main(){
	int n = 20;
	int board[100][100] = {0};
	int sn = 0;
	n_queens(board, n, 0, sn);
	return 0;
}