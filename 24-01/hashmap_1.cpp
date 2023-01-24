#include<iostream>
using namespace std;
class node{
public:
	string key;
	int value;
	node * next;
	node(string k, int v){
		key = k;
		value = v;
		next = NULL;
	}
};
class hashmap{
	node ** a;
	int ts;
	int cs;
	int hash_function(string key){
		int ans = 0;
		int fact = 1;
		for(int i = 0; i < key.length(); i++){
			ans += key[i]%ts * fact%ts;
			ans %= ts;
			fact *= 17%ts;
			fact %= ts;
		}
		return ans % ts;
	}
	void rehash(){
		cs = 0;
		int os = ts; 
		ts *= 2;
		node ** ot = a;
		a = new node * [ts];
		for(int i = 0; i < ts; i++){
			a[i] = NULL;
		}
		for(int i = 0; i < os; i++){
			node * h = ot[i];
			node *p = h;
			while(h){
				insert(h->key, h->value);
				p = h;
				h = h -> next;
				delete p;
			}
		}
		delete []ot;
	}
public:
	hashmap(int size = 7){
		a = new node * [size];
		ts = size;
		cs = 0;
		for(int i = 0; i < ts; i++){
			a[i] = NULL;
		}
	}
	void insert(string key, int value){
		int hash_index = hash_function(key);
		node * temp = new node(key, value);
		temp -> next = a[hash_index];
		a[hash_index] = temp;
		cs++;
		float load_factor = cs/(1.0*ts);
		if(load_factor > 0.6){
			rehash();
		}
	}
	void print_table(){
		cout<<"Hash Table:\n";
		for(int i = 0; i < ts; i++){
			node * h = a[i];
			cout<<i<<" -> ";
			while(h){
				cout<<"("<<h->key
				<<", "<<h->value<<") ";
				h = h->next;
			}
			cout<<endl;
		}
		cout<<endl;
	}
};
int main(){
	hashmap h;
	h.insert("aditya", 78);
	h.insert("macbook", 84);
	h.insert("madhur", 93);
	h.insert("sahil", 69);

	h.print_table();

	h.insert("nikhil", 100);

	h.print_table();

	return 0;
}