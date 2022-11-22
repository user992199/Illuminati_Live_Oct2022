#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string s("Abc");
	// getline(cin, s);
	cout<<s<<endl;
	// syntax
	// variable_identifier.function_identifier(arguments);
	cout<<s.size()<<endl;
	cout<<s.length()<<endl;
	string s1 = "s+s";
	string s2 = s1 + s;
	cout<<s2<<endl;
	return 0;
}