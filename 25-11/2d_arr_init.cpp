#include<iostream>
using namespace std;
int main(){
	// method 1
	int rn = 3, cn = 3;
	int arr[3][3] = {
		{1, 2, 3}, 
		{4, 5, 6}, 
		{7, 8, 9}
	};
	for(int row = 0; row < rn; row++){
		for(int col = 0; col < cn; col++){
			cout<<arr[row][col]<<"\t";
		}cout<<endl;
	}
	return 0;
}