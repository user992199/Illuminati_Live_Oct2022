#include<iostream>
using namespace std;
void char_arr_input(char *arr, int n, char delimiter = '\n'){
	char ch;
	cin>>ch;
	int i = 0;
	for(; i < n-1 && ch != delimiter; i++){
		arr[i] = ch;
		cin.get(ch);
	}
	arr[i] = '\0';
}
int main(){
	char arr[100] = "";
	int n = sizeof(arr)/sizeof(arr[0]);
	char dl = '&';
	// char_arr_input(arr);
	cin.getline(arr, 20);
	cout<<arr<<endl;
	return 0;
}