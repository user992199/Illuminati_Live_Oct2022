#include<iostream>
#include<stack>
using namespace std;
int main(){
	// syntax
	// stack<datatype> identifier;
	stack<char> s;
	int n = 130;
	for(int i = 70; i <= n; i++){
		s.push(i);
	}
	// for(;!s.empty();)
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
	return 0;
}