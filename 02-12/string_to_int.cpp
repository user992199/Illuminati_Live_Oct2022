#include<iostream>
#include<cstring>
using namespace std;
int string_to_int(string s){ // "12323"
	// base case
	if(s.size() == 0) return 0; // 5 == 0
	// recusive case
	int a = string_to_int(s.substr(0, s.size()-1)); // a = "123"
	return a * 10 + s[s.size()-1] - '0'; // 123 * 10 + 2 // 1232
}
int main(){
	string s = "12323";
	cout<<string_to_int(s)<<endl;
	// cout<<string_to_int(s) % 100<<endl;
	return 0;
}