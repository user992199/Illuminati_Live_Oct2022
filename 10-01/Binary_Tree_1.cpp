#include<iostream>
using namespace std;
class node{
public:
	int data;
	node * left, * right;
	node(int d): data(d), left(0), right(0){}
};
// function to create binary tree and return the address of the root node
node * cbt(){
	int data;
	cin>>data;
	// base case
	if(data == -1) return NULL;
	// recursive case
	node * root = new node(data);
	root -> left = cbt(); // cbt() will return the address of the left child after creating the left subtree
	root -> right = cbt(); // cbt() will return the address of the right child after creating the right subtree
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
int count_BT(node * root){
	// base case
	if(!root) return 0;
	// recursive case
	return count_BT(root->left) + count_BT(root->right) + 1;
}
int height_BT(node * root){
	// base case
	if(!root) return 0;
	// recursive case
	return max(height_BT(root->left), height_BT(root->right)) + 1;
}
int diameter_BT(node * root){
	// base case
	if(!root) return 0;
	// recursive case
	int d1 = height_BT(root->left) + height_BT(root->right);
	int d2 = diameter_BT(root->left);
	int d3 = diameter_BT(root->right);
	return max(d1, max(d2, d3));
}

class pair_hd{
public:
	int height;
	int diameter;
};
pair_hd opt_diameter_BT(node * root){
	pair_hd root_pair;
	// base case
	if(!root){
		root_pair.height = root_pair.diameter = 0;
		return root_pair;
	}
	// recursive case
	pair_hd left = opt_diameter_BT(root -> left);
	pair_hd right = opt_diameter_BT(root -> right);
	int d1 = left.height + right.height;
	int d2 = left.diameter;
	int d3 = right.diameter;

	root_pair.height = max(left.height, right.height)+1;
	root_pair.diameter = max(d1, max(d2, d3));
	return root_pair;
}
int main(){
	// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
	node * root = cbt();
	cout<<endl;
	cout<<"Pre Order: ";
	preorder(root);
	cout<<endl;
	cout<<"In Order: ";
	inorder(root);
	cout<<endl;
	cout<<"Post Order: ";
	postorder(root);
	cout<<endl;

	cout<<"\nTotal Nodes in the given binary tree: "<<count_BT(root)<<endl;
	cout<<"\nHeight of the given binary tree: "<<height_BT(root)<<endl;
	cout<<"\nDiameter of the given binary tree: "<<opt_diameter_BT(root).diameter<<endl;

	cout<<endl;
	return 0;
}