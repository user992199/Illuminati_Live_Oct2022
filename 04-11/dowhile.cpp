#include<iostream>
using namespace std;
int main(){
	int i = 0;
	// entry controlled loop
	while(i >= 0){
		cout<<"while: "<<i<<endl;
		i--;
	}

	do{
		cout<<"do while: "<<i<<endl;
		i--;
	}while(i>=0); // exit controlled loop
	cout<<i<<endl;
	return 0;
}