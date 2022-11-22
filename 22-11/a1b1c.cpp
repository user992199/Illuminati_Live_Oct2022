#include<iostream>
#include<cstring>
using namespace std;
string func(string s){
	string t;
	t += s[0];
	for(int i = 1; i < s.size(); i++){
		t += to_string(s[i] - s[i-1]) + s[i];
	}
	return t;
}
int main(){
	string s = "abc";
	getline(cin, s);
	s = func(s);
	cout<<s<<endl;
	return 0;
}