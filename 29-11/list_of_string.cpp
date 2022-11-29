#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char arr[][10] = {
		"hello",
		"world",
		"bye",
		"bye",
		"now"
	};
	cout<<arr[3]<<endl;
	strcpy(arr[3], "pen");
	// cout<<*arr<<endl;
	cout<<arr[3]<<endl;
	return 0;
}