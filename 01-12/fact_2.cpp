#include<iostream>
using namespace std;
long long int fact(long long int n){
	// base case
	if(n == 0){
		return 1;
	}
	// recursive case 
	return n * fact(n-1);
}
int main(){
	cout<<fact(17)<<endl;
	return 0;
}