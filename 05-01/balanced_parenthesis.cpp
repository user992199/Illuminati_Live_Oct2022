#include<iostream>
#include<stack>
using namespace std;
bool check_parenthesis(char * exp){
	stack<char> s;
	for(int i = 0; exp[i]; i++){
		switch(exp[i]){
		case '{':
		case '(':
		case '[':
			s.push(exp[i]);
			break;
		case '}':
			if(!s.empty() and s.top() == '{'){
				s.pop();
			}
			else{
				return false;
			}
			break;
		case ']':
			if(!s.empty() and s.top() == '['){
				s.pop();
			}
			else{
				return false;
			}
			break;
		case ')':
			if(!s.empty() and s.top() == '('){
				s.pop();
			}else{
				return false;
			}
			break;
		}
	}
	return s.empty();
}
int main(){
	char exp[] = "{a+b*(c-d)+e*[f/g]}";
	if(check_parenthesis(exp)){
		cout<<"Balanced\n";
	}else{
		cout<<"Not Balanced\n";
	}
	return 0;
}