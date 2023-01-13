/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// class node{
// public:
//     TreeNode* root;
//     bool kya_1_present_hai;
// };
class Solution {
public:
    bool tree_saaf_kardo(TreeNode* root){
        // base case
        if(!root) return false;
        // recursive case        
        bool left = tree_saaf_kardo(root->left);
        bool right = tree_saaf_kardo(root->right);
        if(!left){
            root->left = NULL;
        }
        if(!right){
            root->right = NULL;
        }
        if(root -> val == 0 and !left and !right){
            return false;
        }
        return true;
    }
    TreeNode* pruneTree(TreeNode* root) {
        bool r = tree_saaf_kardo(root);
        if(!r) return NULL;
        return root;
    }
};