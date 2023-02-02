#include<iostream>
#include<cstring>
using namespace std;
void decimal_to_word(string n){
	string arr[] = {
		"zero", "one", "two", "three", "four",
		"five", "six", "seven", "eight", "nine"
	};
	// base case
	if(n.length() == 0){
		cout<<endl;
		return;
	}
	// recursive case
	cout<<arr[n[0] - '0']<<" ";
	decimal_to_word(n.substr(1));
	return;
}
int main(){
	long long int n = 7563;
	cin>>n;
	decimal_to_word(to_string(n));
	return 0;
}