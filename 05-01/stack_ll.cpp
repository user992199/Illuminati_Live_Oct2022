#include<iostream>
#include<cstring>
using namespace std;
template<typename T>
class node{
public:
	T data;
	node * next;
	node(): next(NULL){}
	node(T d): data(d), next(NULL){}
};
template<typename T>
class stack{
	node<T> * head;
public:
	stack(){
		head = NULL;
	}
	void push(T d){
		if(head == NULL){
			head = new node<T>(d);
		}
		else{
			node<T> * t = new node<T>(d);
			t -> next = head;
			head = t;
		}
	}
	void pop(){
		if(head == NULL){
			return;
		}
		// optional: else part is enough
		else if(head -> next == NULL){
			delete head;
			head = NULL;
		}
		else{
			node<T> * t = head;
			head = head -> next;
			delete t;
		}
	}
	T top(){
		return head->data;
	}
	bool empty(){
		return head == NULL;
	}
};
int main(){
	stack<char> s;
	int n = 95;
	for(int i = 40; i <= n; i++){
		s.push(i+i*0.1);
	}

	// for(;!s.empty();)
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
	return 0;
}