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

int main(){
	int n;
	// n = 4;
	cin>>n;
	if(check_prime(n)){
		cout<<"Prime\n";
	}
	else{
		cout<<"Not Prime\n";
	}
	return 0;
}