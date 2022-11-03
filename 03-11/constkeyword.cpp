#include<iostream>
using namespace std;
int main(){
	float a = 3.14;
	const float pie = a;
	cout<<pie<<endl;
	float circumference = 2 * pie * 7;
	cout<<circumference<<endl;
	return 0;
}