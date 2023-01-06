#include<iostream>
#include<stack>
using namespace std;
void push_bottom(stack<int> &s, int n){
	// base case
	if(s.empty()){
		s.push(n);
		return;
	}
	// recursive case
	int top_2 = s.top();
	s.pop();
	push_bottom(s, n);
	s.push(top_2);
}
void reverse_stack(stack<int> &s){
	// base case
	if(s.empty()) return;
	// recursive case
	int top = s.top();
	s.pop();
	reverse_stack(s);
	push_bottom(s, top);
}
void print_stack(stack<int> s){
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
}
int main(){
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	push_bottom(s, 5);
	push_bottom(s, 6);
	push_bottom(s, 7);
	print_stack(s);
	reverse_stack(s);
	print_stack(s);
	return 0;
}