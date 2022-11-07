#include<iostream>
using namespace std;

long long int factorial(int n){
	long long int prod = 1;
	// for(int i = 1; i <= n; i++){
	// 	prod *= i;
	// }
	while(n){
		prod *= n--;
	}
	return prod;
}

int main(){
	int n = 30;
	// cin>>n;
	cout<<factorial(n)<<endl;
	return 0;
}