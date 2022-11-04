#include<iostream>
using namespace std;
int main(){
	/*
	syntax:

	condition ? work if true : work if false ;

	*/
	/*
	if(i >= 0)
		if(j >= 0)
			cout<<"both +ve\n"
		else
			cout<<"one +ve\n";
	else
		cout<<"-ve\n";
	*/
	int i = 18, j = 10;
	i >= 0 ? j >= 0 ? cout<<"both +ve\n" : cout<<"one +ve\n" : cout<<"-ve\n";
	return 0;
}