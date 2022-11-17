#include<iostream>
using namespace std;
int main(){
	int a, b, c;
	cout<<&a<<endl;
	int**ap,*ip; // declaration of an integer pointer
	ip = &a; // assigning address of a to ap
	ap = &ip;
	cout<<ap<<endl;
	cout<<&ap<<endl;
	cout<<&ip<<endl;
	cout<<sizeof(ap)<<endl;
	cout<<sizeof(&ap)<<endl;
	return 0;
}