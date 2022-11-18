#include<iostream>
using namespace std;
int length_of_string(char *arr){
	int i = 0;
	while(arr[i] != '\0'){
		i++;
	}
	return i;
}
int main(){
	char arr[10000];
	cin.getline(arr, 1000);
	cout<<arr<<endl;
	cout<<length_of_string(arr)<<endl;
	return 0;
}