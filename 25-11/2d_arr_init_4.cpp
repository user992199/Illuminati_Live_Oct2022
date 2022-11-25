#include<iostream>
using namespace std;
int main(){
	// method 4
	int rn = 10, cn = 10;
	int arr[10][10] = {
		1, 2, 3
	};
	cout<<sizeof(arr)<<endl;
	for(int row = 0; row < rn; row++){
		for(int col = 0; col < cn; col++){
			cout<<arr[row][col]<<"\t";
		}cout<<endl;
	}
	return 0;
}