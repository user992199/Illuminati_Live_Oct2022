#include<iostream>
using namespace std;
int main(){
	int rn = 10, cn = 10;
	int arr[rn][cn];
	for(int row = 0; row < rn; row++){
		for(int col = 0; col < cn; col++){
			arr[row][col] = row*10+col;
		}
	}
	for(int row = 0; row < rn; row++){
		for(int col = 0; col < cn; col++){
			cout<<arr[row][col]<<"\t";
		}cout<<endl;
	}
	return 0;
}