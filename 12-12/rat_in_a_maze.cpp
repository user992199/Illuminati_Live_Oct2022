#include<iostream>
using namespace std;
void print(char arr[][10], int m, int n, int sn){
	cout<<"Solution "<<sn<<":-\n";
	for(int i = 0; i < m; i++){
		cout<<arr[i]<<endl;
	}
}
bool rat_in_a_maze(char arr[][10], int i, int j, int m, int n, int &sol_no){
	// base case
	if(i == m-1 and j == n-1){
		sol_no++;
		arr[i][j] = '1';
		print(arr, m, n, sol_no);
		arr[i][j] = '0';
		return true;
	}
	// recursive case
	arr[i][j] = '1';
	bool ans = false;
	if(arr[i][j+1] == '0') 
		ans = rat_in_a_maze(arr, i, j+1, m, n, sol_no);
	if(ans) return true;
	if(arr[i+1][j] == '0') 
		ans = rat_in_a_maze(arr, i+1, j, m, n, sol_no);
	if(ans) return true;
	arr[i][j] = '0';
	return false;
}
int main(){
	char arr[][10] = {
		"0000",
		"0000",
		"0000",
		"0000",
		""
	};
	int sn = 0;
	rat_in_a_maze(arr, 0, 0, 4, 4, sn);
	return 0;
}