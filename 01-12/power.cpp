#include<iostream>
using namespace std;
float power(int x, int n){
	// base case
	if(n==0) return 1;
	// recursive case
	if(n<0) return 1.0/power(x, -n);
	return x * power(x, n-1);
}
int main(){
	cout<<power(2, -5)<<endl;
	return 0;
}