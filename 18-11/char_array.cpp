#include<iostream>
using namespace std;
int main(){
	char a[10];
	a[0] = 'n';
	a[1] = 'i';
	a[2] = 'k';
	a[3] = 'h';
	a[4] = 'i';
	a[5] = 'l';
	a[6] = '\0';
	a[7] = 'b';
	a[8] = 'b';
	a[9] = 'b';
	// a[10] = '9';

	for(int i = 0; i < 10; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<a<<endl;
	return 0;
}