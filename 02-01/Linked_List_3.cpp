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
void merge_2_sorted_ll(node * &h1, node * &h2, node * &t1, node * &t2){
	if(!h1) return;
	if(!h2) return;
	node * p1 = h1;
	node * p2 = h2;
	node * c = 0;
	if(p1 -> data <= p2 -> data){
		c = p1;
		h2 = h1;
		p1 = p1 -> next;
	}else{
		c = p2;
		h1 = h2;
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
		t2 = t1;
	}else{
		c -> next = p2;
		t1 = t2;
	}
}
node * merge_2_sorted_ll_rec(node * a, node * b){
	// base case
	if(!a) return b;
	if(!b) return a;
	// recursive case
	node * nh = 0;
	if(a->data < b->data){
		nh = a;
		nh -> next = merge_2_sorted_ll_rec(a->next, b);
		// a -> next = merge_2_sorted_ll_rec(a->next, b); return a;
	}
	else{
		nh = b;
		nh -> next = merge_2_sorted_ll_rec(a, b->next);
		// b -> next = merge_2_sorted_ll_rec(a, b->next); return b;
	}
	return nh;
}
node * find_middle_node(node * head){
	if(!head) return head;

	node * s = head;
	node * f = head->next; // (*head).next
	while(f and f->next){
		s = s->next;
		f = f->next->next;
	}
	return s;
}
node * merge_sort_ll(node * head){
	// base case
	if(!head or !head->next) return head;
	// recursive case
	// Divide
	node * m = find_middle_node(head);
	node * nh = m->next;
	m -> next = 0;
	// Sort
	head = merge_sort_ll(head);
	nh = merge_sort_ll(nh);
	// Merge
	head = merge_2_sorted_ll_rec(head, nh);
	return head;
}
// void bubble_sort_ll(node * &head)
node * bubble_sort_ll(node * head){
	int len = length_ll(head);
	for(int i = 0; i < len - 1; i++){
		node * n = 0, * c = head, * p = 0;
		while(c and c->next){
			n = c -> next;
			// swap
			if(c -> data > n -> data){
				// head bhi swap hoga
				if(c == head){
					c -> next = n -> next;
					n -> next = c;
					head = n;
					p = n;
				}
				// else if(n == tail)
				// head swap nahi hoga
				else{
					c -> next = n -> next;
					n -> next = c;
					p -> next = n;
					p = n;
				}
			}	
			// swapping nahi karni
			else{
				p = c; // p = p -> next;
				c = n; // c = c -> next;
			}
		}
	}
	return head;
}
// void bubble_sort_ll_2(node * &head, node * &tail){
// 	head = bubble_sort_ll(head);
// 	tail = find_tail(head);
// }
int main(){
	node * head = NULL, * tail = NULL;
	insert_at_end(head, tail, 10);
	insert_at_end(head, tail, 9);
	insert_at_end(head, tail, 8);
	insert_at_end(head, tail, 7);
	insert_at_end(head, tail, 6);
	insert_at_end(head, tail, 5);
	insert_at_end(head, tail, 4);
	insert_at_end(head, tail, 3);
	insert_at_end(head, tail, 2);
	insert_at_end(head, tail, 1);
	insert_at_end(head, tail, 0);
	insert_at_end(head, tail, -1);
	print_ll(head);
	head = bubble_sort_ll(head);
	print_ll(head);
	// node * h1 = 0, * t1 = 0;
	// node * h2 = 0, * t2 = 0;
	// insert_at_end(h1, t1, 1);
	// insert_at_end(h1, t1, 2);
	// insert_at_end(h1, t1, 5);
	// insert_at_end(h1, t1, 6);
	// insert_at_end(h2, t2, -3);
	// print_ll(h1);
	// print_ll(h2);
	// // h1 = h2 = merge_2_sorted_ll_rec(h1, h2);
	// print_ll(h1);
	// print_ll(h2);
	// cout<<find_middle_node(h2)->data<<endl;
	return 0;
}