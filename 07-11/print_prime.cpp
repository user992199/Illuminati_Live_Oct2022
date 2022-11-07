#include<iostream>
#include<cmath>
using namespace std;

bool check_prime(int n){
	if(n <= 1){
		return false;
	}
	if(n==2){
		return true;
	}
	if(n%2 == 0){
		return false;
	}
	int i = 3;
	for(;i <= sqrt(n); i += 2){
		if(n%i == 0){
			return false;
		}
	}
	return true;
}

void print_prime(int n){
	if(n < 2){
		return;
	}
	cout<<"2 ";
	for(int i = 3; i <= n; i += 2){ // har odd number par jaa raha huun
		if(check_prime(i)){
			cout<<i<<" ";
		}
	}
	cout<<endl;
}

int main(){
	int n;
	// n = 4;
	cin>>n;
	print_prime(n);
	return 0;
}