#include<iostream>
using namespace std;
void fun(int * &iptr){
	int k = 24;
	cout<<"2: "<<iptr<<"->"<<*iptr<<endl;
	*iptr = 33;
	iptr = &k;
	cout<<"3: "<<iptr<<"->"<<*iptr<<endl;
}
int main(){
	int i = 99;
	int *iptr = &i;
	cout<<"1: "<<iptr<<"->"<<*iptr<<endl;
	fun(iptr);
	cout<<"4: "<<iptr<<"->"<<*iptr<<endl;
	return 0;
}