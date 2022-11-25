#include<iostream>
using namespace std;
int main(){
	// method 5
	int arr[][5] = {
		{1}, 
		{2, 4, 5, 6, 79}, 
		{3}, 
		{},
		{10, 20, 30},
		{78, 89}
	};
	// no of row = sizeof(2D array) / sizeof(Single row)
	int rn = sizeof(arr)/sizeof(arr[0]);
	// no of col = sizeof(Single row) / sizeof(Single Bucket)
	int cn = sizeof(arr[0])/sizeof(arr[0][0]);
	for(int row = 0; row < rn; row++){
		cout<<"row "<<row<<"=>\t";
		for(int col = 0; col < cn; col++){
			cout<<arr[row][col]<<"\t";
		}cout<<endl;
	}
	cout<<arr<<endl;
	for(int i = 0; i < rn; i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}