#include<iostream>
using namespace std;
int main(){
	char arr[15];
	cin.get(arr, 15);
	for(int i = 0; i < 15; i++){
		cin.get(arr[i]);
	}
	for(int i = 0; i < 15; i++){
		cout<<arr[i]<<"-";
	}cout<<endl;
	return 0;
}