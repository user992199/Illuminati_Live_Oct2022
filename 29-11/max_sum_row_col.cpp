#include<iostream>
using namespace std;
void max_sum(int arr[100][100], int m, int n){
	int msr = INT_MIN, msri = 0;
	for(int row = 0; row < m; row++){
		int cs = 0;
		for(int col = 0; col < n; col++){
			cs += arr[row][col];
		}
		if(cs>msr){
			msr = cs;
			msri = row;
		}
	}
	int msc = INT_MIN, msci = 0;
	for(int col = 0; col < n; col++){
		int cs = 0;
		for(int row = 0; row < m; row++){
			cs += arr[row][col];
		}
		if(cs>msc){
			msc = cs;
			msci = col;
		}
	}
	if(msr>msc){
		cout<<"row "<<msri+1<<" has the maximum sum of "<<msr<<endl;
	}else{
		cout<<"col "<<msci+1<<" has the maximum sum of "<<msc<<endl;
	}
}
int main(){
	int m, n;
	cin>>m>>n;
	int arr[100][100];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cin>>arr[i][j];
		}
	}
	max_sum(arr, m, n);
	return 0;
}