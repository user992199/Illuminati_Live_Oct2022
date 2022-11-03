#include<iostream>
using namespace std;

int i = 100;

int main(){
	cout<<i<<endl;
	cout<<::i<<endl;
	int i = 10;
	if(i<=10){
		cout<<i<<endl;
		int i = 0;
		cout<<i<<endl;
		cout<<::i<<endl;
		::i++;
	}
	cout<<i<<endl;

	cout<<::i<<endl;
	return 0;
}