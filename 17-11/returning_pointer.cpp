#include<iostream>
using namespace std;
int * fun(){
	int k = 10;
	cout<<&k<<"->"<<*(&k)<<endl;
	return &k;
}
int main(){
	int * ip = fun();
	cout<<ip<<"->"<<*ip<<endl;
	return 0;
}