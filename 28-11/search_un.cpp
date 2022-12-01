#include<iostream>
using namespace std;
void search_key(int arr[100][100], int m, int n, int key){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(arr[i][j] == key){
				cout<<"row no => "<<i<<endl;
				cout<<"col no => "<<j<<endl;
				return;
			}
		}
	}
	cout<<"key not found\n";
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
	int key;
	cin>>key;
	search_key(arr, m, n, key);
	return 0;
}