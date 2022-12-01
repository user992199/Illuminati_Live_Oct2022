#include<iostream>
using namespace std;
void search_sorted_2d(int arr[4][4], int m, int n, int key){
	int row = 0, col = n-1;
	while(row < m and col >= 0){
		if(arr[row][col] == key){
			cout<<"row index => "<<row<<endl;
			cout<<"col index => "<<col<<endl;
			return;
		}
		else if(arr[row][col] > key){
			 col--;
		}else{
			row++;
		}
	}
	cout<<"Key not found\n";
}
int main(){
	int arr[4][4] = {
		{1, 3, 8, 11},
		{2, 6, 9, 15},
		{4, 10, 19, 21},
		{5, 12, 20, 25}
	};
	int key;
	cin>>key;
	int m = 4, n = 4;
	search_sorted_2d(arr, m, n, key);
	return 0;
}