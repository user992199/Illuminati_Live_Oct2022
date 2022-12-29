#include<iostream>
using namespace std;
class node{ // self referencial class
public:
	int data;
	node * next;
	node(){
		data = 0;
		next = 0;
	}
	node(int d){
		data = d;
		next = 0;
	}
};
class LinkedList{
public:
	node * head;
	node * tail;
	LinkedList(){
		head = tail = 0;
	}
	void print_ll(){
		node * temp = head;
		while(temp){
			cout<<temp->data<<" -> ";
			temp = temp -> next;
		}
		cout<<"NULL\n";
	}
	void insert_node_at_begin(int data){
		if(!head){ // head == NULL
			head = new node(data);
			tail = head;
		}else{
			node * temp = new node(data);
			temp -> next = head;
			head = temp;
		}
		print_ll();
	}
	void insert_node_at_end(int data){
		if(!head){ // head == NULL
			head = new node(data);
			tail = head;
		}else{
			node * temp = new node(data);
			tail -> next = temp;
			tail = temp;
		}
		print_ll();
	}
	int Length_ll(){
		node * t = head;
		int cnt = 0;
		while(t){
			cnt++;
			t = t->next;
		}
		return cnt;
	}
};
// void print_ll(node * head);
// void insert_node_at_begin(node * &head, node * &tail, int data){
// 	if(!head){ // head == NULL
// 		head = new node(data);
// 		tail = head;
// 	}else{
// 		node * temp = new node(data);
// 		temp -> next = head;
// 		head = temp;
// 	}
// 	print_ll(head);
// }
// void insert_node_at_end(node * &head, node * &tail, int data){
// 	if(!head){ // head == NULL
// 		head = new node(data);
// 		tail = head;
// 	}else{
// 		node * temp = new node(data);
// 		tail -> next = temp;
// 		tail = temp;
// 	}
// 	print_ll(head);
// }
// void print_ll(node * head){
// 	while(head){
// 		cout<<head->data<<" -> ";
// 		head = head -> next;
// 	}
// 	cout<<"NULL\n";
// }
// int Length_ll(node * head){
// 	int cnt = 0;
// 	while(head){
// 		cnt++;
// 		head = head->next;
// 	}
// 	return cnt;
// }
int main(){
	// node * head = NULL, *tail = NULL;
	// // cout<<head->data<<endl;
	// cout<<Length_ll(head)<<endl;
	// insert_node_at_end(head, tail, 0);
	// insert_node_at_begin(head, tail, 10);
	// insert_node_at_begin(head, tail, 20);
	// insert_node_at_begin(head, tail, 30);
	// insert_node_at_begin(head, tail, 40);
	// insert_node_at_begin(head, tail, 50);
	// insert_node_at_end(head, tail, 100);
	// insert_node_at_end(head, tail, 150);
	// insert_node_at_end(head, tail, 250);
	// insert_node_at_end(head, tail, 350);
	// insert_node_at_end(head, tail, 450);
	// cout<<Length_ll(head)<<endl;
	LinkedList ll1;
	ll1.insert_node_at_begin(10);
	ll1.insert_node_at_begin(20);
	ll1.insert_node_at_end(30);
	ll1.insert_node_at_end(40);
	ll1.print_ll();
	cout<<ll1.Length_ll()<<endl;
	LinkedList ll2;
	ll2.print_ll();
	// print_ll(head);
	// print_ll(tail);
	// print_ll(head);
	// print_ll(tail);
	// node a(10);
	// node b(19);
	// node c;
	// c.data = 56;
	// b.next = &c;
	// a.next = &b;
	// // cout<<(*a.next).data<<endl;
	// cout<<a.data<<endl;
	// cout<<a.next->data<<endl;
	// cout<<a.next->next->data<<endl;
	return 0;
}