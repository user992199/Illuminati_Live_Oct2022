#include<iostream>
using namespace std;
class node{
public:
	int data;
	node * next;
	node(){
		data = 0;
		next = NULL;
	}
	node(int d){
		data = d;
		next = 0;
	}
};
void print_ll(node * head){
	while(head){
		cout<<head -> data<< " -> ";
		head = head -> next;
	}
	cout<<"NULL\n";
}
void insert_at_begin(node * &head, node * &tail, int d){
	if(!head){
		head = new node(d);
		tail = head;
	}
	else{
		node * t = new node(d);
		t -> next = head;
		head = t;
	}
}
void insert_at_end(node * &head, node * &tail, int d){
	if(!head){
		head = new node(d);
		tail = head;
	}else{
		node * t = new node(d);
		tail->next = t;
		tail = t;
	}
}
int length_ll(node * head){
	int cnt = 0;
	while(head){
		cnt++;
		head = head -> next;
	}
	return cnt;
}
void insert_in_mid(node * &head, node * &tail, int pos, int d){
	if(pos == 0){
		insert_at_begin(head, tail, d);
	}
	else if(pos >= length_ll(head)){
		insert_at_end(head, tail, d);
	}
	else{
		node * p = head;
		for(int i = 0; i < pos - 1; i++){
			p = p -> next;
		}
		node * n = new node(d);
		n -> next = p -> next;
		p -> next = n;
	}
}
// deletion
void delete_from_begin(node * & head, node * & tail){
	if(!head){
		return;
	}else if(head == tail){
		delete head;
		head = tail = 0;
	}else{
		node * temp = head;
		head = head -> next;
		delete temp;
	}
}	
void delete_from_end(node * &head, node * & tail){
	if(!head){
		return;
	}else if(head == tail){
		delete head;
		head = tail = 0;
	}else{
		node * temp = head;
		while(temp->next!=tail){
			temp = temp->next;
		}
		// delete tail;
		tail = temp;
		delete temp->next; 
		// delete tail -> next;
		tail -> next = 0;
	}
}
void delete_from_end_2(node * &head, node * & tail){
	if(!head){
		return;
	}else if(head == tail){
		delete head;
		head = tail = 0;
	}else{
		tail = head;
		while(tail -> next -> next){
			tail = tail -> next;
		}
		delete tail -> next;
		tail -> next = 0;
	}
}
void delete_from_mid(node * & head, node * & tail, int pos){
	if(pos == 0){
		delete_from_begin(head, tail);
	}else if(pos >= length_ll(head) - 1){
		delete_from_end(head, tail);
	}else{
		node * p = head;
		pos--;
		while(pos--){
			p = p -> next;
		}
		node * t = p -> next;
		// p -> next = t -> next;
		p -> next = p -> next -> next;
		delete t;
	}
}
void reverse_ll(node * &head, node * &tail){
	node * p = 0;
	node * c = head;
	node * n = head->next; // node * n;
	while(c){
		n = c -> next;
		c -> next = p;
		p = c;
		c = n;
	}
	swap(head, tail);
}
node * search_ll(node * head, int key){
	while(head){
		if(head->data == key){
			return head;
		}
		head = head->next;
	}
	return NULL;
}
node * search_ll_rec(node * head, int key){
	// base case
	// head == NULL
	// head == 0
	if(!head) return 0;
	// recursive case
	if(head -> data == key){
		return head;
	}
	return search_ll_rec(head -> next, key);
}
void merge_2_sorted_ll(node * &h1, node * &h2){
	node * p1 = h1;
	node * p2 = h2;
	node * c = 0;
	if(p1 -> data <= p2 -> data){
		c = p1;
		// h2 = h1;
		p1 = p1 -> next;
	}else{
		c = p2;
		// h1 = h2;
		p2 = p2 -> next;
	}
	while(p1 and p2){
		if(p1 -> data <= p2 -> data){
			c -> next = p1;
			c = p1;
			p1 = p1 -> next;
		}else{
			c -> next = p2;
			c = p2;
			p2 = p2 -> next;
		}
	}
	if(p1){
		c -> next = p1;
		// t2 = t1;
	}else{
		c -> next = p2;
		// t1 = t2;
	}
}
int main(){
	// node * head = 0, * tail = 0;
	// insert_at_begin(head, tail, 10);
	// insert_at_begin(head, tail, 20);
	// insert_at_begin(head, tail, 30);
	// insert_at_end(head, tail, 100);
	// insert_at_end(head, tail, 120);
	// insert_at_end(head, tail, 140);
	// insert_in_mid(head, tail, 10, 200);
	// reverse_ll(head, tail);
	// print_ll(head);
	// delete_from_begin(head, tail);
	// delete_from_begin(head, tail);
	// delete_from_end_2(head, tail);
	// delete_from_mid(head, tail, 3);
	// print_ll(head);
	// reverse_ll(head, tail);
	// print_ll(head);
	// if(search_ll_rec(head, 120)){
	// 	cout<<search_ll_rec(head, 120) -> data<<endl;
	// 	cout<<"element is present in the LL\n";
	// }
	// else{
	// 	cout<<"element not found\n";
	// }
	node * h1 = 0, * t1 = 0;
	node * h2 = 0, * t2 = 0;
	insert_at_end(h1, t1, 1);
	insert_at_end(h1, t1, 2);
	insert_at_end(h1, t1, 5);
	insert_at_end(h1, t1, 6);
	insert_at_end(h1, t1, 10);
	insert_at_end(h2, t2, 3);
	insert_at_end(h2, t2, 4);
	insert_at_end(h2, t2, 4);
	insert_at_end(h2, t2, 7);
	insert_at_end(h2, t2, 19);
	print_ll(h1);
	print_ll(h2);
	merge_2_sorted_ll(h1, h2);
	print_ll(h1);
	return 0;
}