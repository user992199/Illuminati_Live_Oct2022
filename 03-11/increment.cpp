#include<iostream>
using namespace std;
int main(){
	int i = 0;

	while(++i <= 10){ // (0 < 10) True (i++)
		cout<<i<<" ";
		// i = i + 1;
		// i += 1;
	}
	cout<<endl;

	while(--i >= 0){
		cout<<i<<" ";
		// i = i + 1;
		// i += 1;
	}
	cout<<endl;
	cout<<i<<endl;
	return 0;
}