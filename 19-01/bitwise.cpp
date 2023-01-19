#include<iostream>
using namespace std;
int main(){
	// 19 -> 10011
	// 11 -> 01011							 10011 -> 19
	int a = 19, b = 11; //                   01011 -> 11
	cout<<"19 & 11: "<< ( a & b ) <<endl; // 00011 -> 3
	cout<<"19 | 11: "<< ( a | b ) <<endl; // 11011 -> 27
	cout<<"19 ^ 11: "<< ( a ^ b ) <<endl; // 11000 -> 24
	cout<<"19 << 3: "<< ( a << 3 ) <<endl;// 10011000 -> 152 = 128 + 16 + 8
	cout<<"19 >> 2: "<< ( a >> 2 ) <<endl;// 100 -> 4
	cout<<"~19: "<< ( ~a ) <<endl;        // -20
	int k = INT_MAX;
	cout<<"~2147483647: "<< ( ~k ) <<endl;
	return 0;
}