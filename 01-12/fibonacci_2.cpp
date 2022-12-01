#include<iostream>
using namespace std;
long long int fibonacci(long long int n){
	// base case
	if(n == 1 or n == 2) return n-1;
	// recursive case
	return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
	cout<<fibonacci(10)<<endl;
	return 0;
}