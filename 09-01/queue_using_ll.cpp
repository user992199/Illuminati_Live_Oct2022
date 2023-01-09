#include<iostream>
using namespace std;
template<typename T>
class node{
public:
	T data;
	node * next;
	node(){
		next = 0;
	}
	node(T d): data(d), next(0){
		next = 0;
	}
};
template <typename T>
class queue{
	node <T> *head, *tail;
public:
	queue(){
		head = tail = 0;
	}
	void push(T d){
		if(head == NULL){
			head = tail = new node<T>(d);
		}
		else{
			node <T>* temp = new node<T>(d);
			tail -> next = temp;
			// tail = tail -> next;
			tail = temp;
		}
	}
	void pop(){
		if(head == NULL){
			return;
		}else if(head -> next == NULL){
			delete head;
			head = tail = 0;
		}else{
			node <T> * temp = head;
			head = head -> next;
			delete temp;
			// if(head == NULL) tail = 0;
		}
	}
	T front(){
		return head -> data;
	}
	bool empty(){
		return head == NULL;
	}
};
int main(){
	queue<long long> q;
	q.push(100000000001);
	q.push(100000000002);
	q.push(100000000003);
	q.push(100000000004);
	q.push(100000000005);
	while(!q.empty()){
		cout<< q.front() << " ";
		q.pop();
	}
	cout<<endl;
	return 0;
}