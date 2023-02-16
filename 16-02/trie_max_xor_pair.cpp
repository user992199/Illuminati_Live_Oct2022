#include<iostream>
using namespace std;
class node{
public:
	int number;
	node * left; // 0
	node * right; // 1
	node(){
		number = -1;
		right = 0;
		left = 0;
	}
};
class Trie{
public:
	node* root;
	Trie(){
		root = new node();
	}
	void insert(int n){
		node * temp = root;
		for(int i = 31; i >= 0; i--){
			int bit = n & (1<<i);
			if(bit){
				if(!(temp -> right)) 
					temp -> right = new node();
				temp = temp -> right;
			}else{
				if(!(temp -> left)) 
					temp -> left = new node();
				temp = temp -> left;
			}
		}
		temp -> number = n;
	}
	int max_xor_helper(int n){
		node * temp = root;
		for(int i = 31; i >= 0; i--){
			int bit = n & (1<<i);
			if(bit){
				if(temp -> left != 0){
					temp = temp -> left;
				}else{
					temp = temp -> right;
				}
			}else{
				if(temp -> right != 0){
					temp = temp -> right;
				}else{
					temp = temp -> left;
				}
			}
		}
		return (temp -> number) ^ n;
	}
	int max_xor(int * arr, int n){
		int ans = INT_MIN;
		for(int i = 0; i < n; i++){
			insert(arr[i]);
			ans = max(ans, max_xor_helper(arr[i]));
		}
		return ans;
	}
};
int main(){
	Trie t;
	int arr[] = {100, 200, 300, 400, 500};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<t.max_xor(arr, n)<<endl;
	return 0;
}