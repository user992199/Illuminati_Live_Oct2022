#include<iostream>
using namespace std;
void print_natural_numbers(int n){
	// base case
	if(n==1){
		cout<<"1 ";
		return;
	}
	// recursive case
	cout<<n<<" ";
	print_natural_numbers(n-1);
	return;
}
int main(){
	print_natural_numbers(90);
	return 0;
}