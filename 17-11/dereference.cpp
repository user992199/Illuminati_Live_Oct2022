#include<iostream>
using namespace std;
int main(){
	int i = 1000;
	int * ip = &i;
	cout<<i<<endl;
	cout<<&i<<endl;
	cout<<ip<<endl;
	cout<<*ip<<endl;
	cout<<*&i<<endl;
	*ip = -99;
	cout<<*ip<<endl;
	int k = *ip;
	ip = &k;
	cout<<k<<endl;
	return 0;
}