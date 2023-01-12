#include<iostream>
#include<queue>
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
void level_order_traversal(node * root){
	if(!root) return;
	queue<node *> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		node * temp = q.front();
		q.pop();
		if(!temp){
			if(q.empty()) return;
			cout<<endl;
			q.push(NULL);
		}else{
			cout<<temp->data<<" ";
			if(temp -> left) q.push(temp->left);
			if(temp -> right) q.push(temp->right);
		}
	}

}
void mirror_image(node * root){
	// base case
	if(!root) return;
	// rerurcive case
	swap(root->left, root->right);
	mirror_image(root->left);
	mirror_image(root->right);
}
node * level_wise_create(){
	int d, l, r;
	cout<<"Enter Root Node: ";
	cin>>d;
	if(d == -1) return NULL;
	node * root = new node(d);
	queue<node*> q;
	q.push(root);
	while(!q.empty()){
		node * curr = q.front();
		q.pop();
		cout<<"Enter the left child of "<<curr->data<<": ";
		cin>>l;
		cout<<"Enter the right child of "<<curr->data<<": ";
		cin>>r;
		if(l!=-1) {
			curr->left = new node(l);
			q.push(curr->left);
		}
		if(r!=-1) {
			curr->right = new node(r);
			q.push(curr->right);
		}
	}
	return root;
}
void right_view_1(node * root){
	if(!root) return;
	queue<node *> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		node * temp = q.front();
		q.pop();
		if(q.empty()) return;
		if(!q.front()){
			cout<<temp->data<<endl;
		}
		if(!temp){
			q.push(NULL);
		}else{
			if(temp -> left) q.push(temp->left);
			if(temp -> right) q.push(temp->right);
		}
	}
}
void right_view_2_helper(node * root, int cl, int & mx){
	// base case
	if(!root) return;
	// recursive case
	if(cl > mx){
		cout<<root->data<<endl;
		mx = cl;
	}
	right_view_2_helper(root->right, cl+1, mx);
	right_view_2_helper(root->left, cl+1, mx);
}
void right_view_2(node * root){
	int cl = 0;
	int mx = INT_MIN;
	right_view_2_helper(root, cl, mx);
}

///////////////////// - TOP VIEW - /////////////////////

void find_level_tv(node * root, int &mi, int & mx, int cl){
	// base case 
	if(!root) return;
	// recursive case
	mi = min(mi, cl);
	mx = max(mx, cl);
	find_level_tv(root->left, mi, mx, cl - 1);
	find_level_tv(root->right, mi, mx, cl + 1);
}

bool find_level_node(node * root, int level, int cl){
	// base case
	if(!root) return false;
	// recusive case
	if(cl == level){
		cout<<root->data<<" ";
		return true;
	}
	if(level < 0){
		if(find_level_node(root->left, level, cl - 1))
			return true;
		return find_level_node(root->right, level, cl + 1);
	}else{
		if(find_level_node(root->right, level, cl + 1))
			return true;
		return find_level_node(root->left, level, cl - 1);
	}
}

void top_view(node * root){
	int mi = INT_MAX, mx = INT_MIN;
	find_level_tv(root, mi, mx, 0);
	for(int level = mi; level <= mx; level++){
		find_level_node(root, level, 0);
	}
	cout<<endl;
}

///////////////////// - TOP VIEW - /////////////////////

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
	cout<<"\nLevel Order Traversal: \n";
	level_order_traversal(root);
	// mirror_image(root);
	// cout<<"\nLevel Order Traversal after mirroring: \n";
	// level_order_traversal(root);
	cout<<endl;
	cout<<"\nRight View: \n";
	right_view_2(root);
	cout<<"\nTop View: ";
	top_view(root);
	cout<<endl;
	return 0;
}