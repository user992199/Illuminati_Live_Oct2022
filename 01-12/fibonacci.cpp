#include<iostream>
using namespace std;
long long int fibonacci(long long int &count, long long int n){
	// base case
	if(n == 1 or n == 2) return n-1;
	// recursive case
	count += 2;
	long long int chota_soln_1 = fibonacci(count, n-1);
	long long int chota_soln_2 = fibonacci(count, n-2);
	// badi prob ka soln
	long long int bada_soln = chota_soln_1 + chota_soln_2;
	return bada_soln;
}
int main(){
	long long int count = 1;
	cout<<fibonacci(count, 50)<<" "<<count<<endl;
	return 0;
}