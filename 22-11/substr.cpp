#include<iostream>
#include<cstring>
using namespace std;
int main(){
	//          012345678910
	string s = "Hello World";
	cout<<s<<endl;
	// s.substr => sub string
	// will return substring starting from index given as argument
	cout<<s.substr(7)<<endl;
	// s.substr(id, n);
	// will return substring containing character 'n' 
	// or the second argument starting from index given as first argument
	cout<<s.substr(1, 3)<<endl;
	string k = s.substr(6, 3);
	cout<<k<<endl;
	cout<<"***********\n";
	// push_back
	k.push_back('\n');
	k.push_back(65);
	cout<<k<<endl;
	cout<<"***********\n";
	// pop_back
	k.pop_back();
	k.pop_back();
	k.pop_back();
	k.pop_back();
	k.pop_back();
	k.pop_back();
	k.pop_back();
	k.pop_back();
	k.pop_back();
	cout<<k<<endl;
	return 0;
}