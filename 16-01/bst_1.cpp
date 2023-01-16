#include<iostream>
using namespace std;
class node{
public:
	int data;
	node * left, * right;
	node(int d): data(d), left(0), right(0){}
};
node * insert_node_bst(node * root, int d){
	// base case
	if(!root){
		root = new node(d);
		return root;
	}
	// recursive case
	if(root->data >= d) root->left = insert_node_bst(root->left, d);
	else root->right = insert_node_bst(root->right, d);
	return root;
}
node * create_bst(){
	node * root = NULL;
	int d;
	cin>>d;
	while(d != -1){
		root = insert_node_bst(root, d);
		cin>>d;
	}
	return root;
}
void preorder(node * root){
	// base case
	if(!root) return;
	// recusive case
	cout<< root -> data <<" ";
	preorder(root -> left);
	preorder(root -> right);
}
void inorder(node * root){
	// base case
	if(!root) return;
	// recusive case
	inorder(root -> left);
	cout<< root -> data <<" ";
	inorder(root -> right);
}
void postorder(node * root){
	// base case
	if(!root) return;
	// recusive case
	postorder(root -> left);
	postorder(root -> right);
	cout<< root -> data <<" ";
}
node * search_bst(node * root, int d){
	// base case
	if(!root) return NULL;
	// recusive case
	if(root->data == d) return root;
	else if(root->data > d) return search_bst(root->left, d);
	else return search_bst(root->right, d);
}
void print_range_bst(node * root, int k1, int k2){
	// base case
	if(!root) return;
	// recursive case	
	print_range_bst(root->left, k1, k2);
	if(root->data >= k1 and root->data <= k2) cout<<root->data<<" ";
	print_range_bst(root->right, k1, k2);
}
int height_bt(node * root){
	// base case
	if(!root) return 0;
	// recursive case
	return max(height_bt(root->left) , height_bt(root->right)) + 1;
}
bool is_balanced_bst(node * root){
	// base case
	if(!root) return true;
	// recursive case
	if(abs(height_bt(root->left) - height_bt(root->right)) <= 1 and 
		is_balanced_bst(root->left) and 
		is_balanced_bst(root->right)){
		return true;
	}
	return false;
	// if(abs(height_bt(root->left) - height_bt(root->right)) > 1 or 
	// 	!if_balanced_bst(root->left) or 
	// 	!if_balanced_bst(root->right)){
	// 	return false;
	// } return true;
}
/////////////////// Optimized Is Balanced ///////////////////
class Pair{
public:
	int height;
	bool bal;
};
Pair is_balanced_bst_pair(node * root){
	// base case
	if(!root){
		Pair p;
		p.height = 0;
		p.bal = true;
		return p;
	}
	// recursive case
	Pair l = is_balanced_bst_pair(root->left);
	if(!l.bal){ 
		l.height += 1;
		return l;
	}
	Pair r = is_balanced_bst_pair(root->right);
	if(!r.bal){
		r.height += 1;
		return r;
	}
	Pair n;
	n.height = max(l.height, r.height) + 1;
	n.bal = true;
	if(abs(l.height - r.height) > 1) n.bal = false;
	return n;
}
bool is_balanced_bst_opt(node * root){
	return is_balanced_bst_pair(root).bal;
}
/////////////////// Optimized Is Balanced ///////////////////
bool check_bst(node * root, int mi = INT_MIN, int mx = INT_MAX){
	// base case
	if(!root) return true;
	// recursive case
	if(root -> data <= mx and root -> data >= mi and 
		check_bst(root->right, root->data, mx) and
		check_bst(root->left, mi, root->data))
		return true;
	return false;
}
int main(){
	node * root = NULL;
	root = create_bst();
	preorder(root);
	cout<<endl;
	inorder(root);
	cout<<endl;
	postorder(root);
	cout<<endl;
	node * add_node = search_bst(root, 1);
	add_node ? cout<<"Node Found: "<<add_node->data<<endl : cout<<"Node not found\n";
	int k1 = 5, k2 = 13;
	cout<<"Printing elements present in BST in the range: "<<k1<<" -> "<<k2<<":\n";
	print_range_bst(root, k1, k2);
	cout<<endl;
	if(is_balanced_bst_opt(root)) cout<<"Given BST is Balanced\n";
	else cout<<"Given BST is NOT Balanced\n";
	root = insert_node_bst(root, 9);
	cout<<"After inserting 9:\n";
	if(is_balanced_bst_opt(root)) cout<<"Given BST is Balanced\n";
	else cout<<"Given BST is NOT Balanced\n";
	if(check_bst(root)) cout<<"Yes given bt is a bst\n";
	else cout<<"No given bt is NOT a bst\n";
	return 0;
}