#include<iostream>
#include<cstring>
using namespace std;
string move_x(string s){
	// base case
	if(s.size() == 0 or s.size() == 1) return s;
	// recursive case
	string temp = s.substr(0, 2);
	return temp == "pi" ? 
		"3.14" + move_x(s.substr(2)): 
		s[0] + move_x(s.substr(1));
}
int main(){
	string s;
	getline(cin, s);
	cout<<move_x(s)<<endl;
	return 0;
}