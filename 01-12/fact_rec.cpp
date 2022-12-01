#include<iostream>
using namespace std;
int fact(int n){
	// base case
	if(n == 0){
		return 1;
	}
	// recursive case 
	int choti_prob_ka_soln = fact(n-1);
	// badi prob ka soln using choti problem ka solution
	int badi_prob_ka_soln = n * choti_prob_ka_soln;
	return badi_prob_ka_soln;
}
int main(){
	cout<<fact(5)<<endl;
	return 0;
}