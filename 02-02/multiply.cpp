#include<iostream>
using namespace std;
int multi(int a, int b){
	// base case
	if(a == 0 or b == 0) return 0;
	// recursive case
	return a > b ? a + multi(a, b-1) : b + multi(b, a-1);
}
int main(){
	int a = 123, b = 725000000;
	cout<<multi(a, b)<<endl;
	return 0;
}