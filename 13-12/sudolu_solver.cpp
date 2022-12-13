#include<iostream>
#include<cmath>
using namespace std;
void print(int arr[100][100], int n, int sn){
	cout<<"Solution "<<sn<<":-\n";
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout<<arr[i][j]<<" ";
		}cout<<endl;
	}
}
bool check_valid(int b[100][100], int n, int i, int j, int num){
	// row check
	for(int col = 0; col < n; col++)
		if(b[i][col] == num) return false;
	// col check
	for(int row = 0; row < n; row++)
		if(b[row][j] == num) return false;
	// box check
	int sq = sqrt(n);
	int boxsr = i - i % sq;
	int boxsc = j - j % sq;
	for(int row  = boxsr; row < boxsr + sq; row++)
		for(int col  = boxsc; col < boxsc + sq; col++)
			if(b[row][col] == num) return false;
	return true;
}
bool sudoku_solver(int b[100][100], int n, int i, int j, int &sn){
	// base case
	if(i == n){
		print(b, n, ++sn);
		// return true;
		return false;
	}
	if(j == n) return sudoku_solver(b, n, i+1, 0, sn);
	// recursive case
	if(b[i][j]) return sudoku_solver(b, n, i, j+1, sn);
	for(int num = 1; num <= n; num++){
		if(!check_valid(b, n, i, j, num)) continue;
		b[i][j] = num;
		if(sudoku_solver(b, n, i, j+1, sn)) return true;
		b[i][j] = 0;
	}
	return false;
}
int main(){
	// int board[100][100] = {
	// 	{5, 3, 0, 0, 7, 0, 0, 0, 0},
	// 	{6, 0, 0, 1, 9, 5, 0, 0, 0},
	// 	{0, 9, 8, 0, 0, 0, 0, 6, 0},
	// 	{8, 0, 0, 0, 6, 0, 0, 0, 3},
	// 	{4, 0, 0, 8, 0, 3, 0, 0, 1},
	// 	{7, 0, 0, 0, 2, 0, 0, 0, 6},
	// 	{0, 6, 0, 0, 0, 0, 2, 8, 0},
	// 	{0, 0, 0, 4, 1, 9, 0, 0, 5},
	// 	{0, 0, 0, 0, 8, 0, 0, 7, 9}
	// };
	int board[100][100] = {0};
	int n = 4;
	int sn = 0;
	sudoku_solver(board, n, 0, 0, sn);
	return 0;
}