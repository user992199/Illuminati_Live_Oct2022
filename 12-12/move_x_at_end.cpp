#include<iostream>
#include<cstring>
using namespace std;
string move_x(string s){
	// base case
	if(s.size() == 0) return "";
	// recursive case
	return s[0] == 'x' ? 
		move_x(s.substr(1)) + s[0]:
		s[0] + move_x(s.substr(1));
}
int main(){
	string s;
	getline(cin, s);
	cout<<move_x(s)<<endl;
	return 0;
}