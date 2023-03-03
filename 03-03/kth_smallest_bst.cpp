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
class Solution {
public:
    int inorder(TreeNode * root, int & k){
        if(!root) return -1;
        // recursive case
        int ans = inorder(root->left, k);
        if(ans > -1) return ans;
        if(--k == 0){
            return root->val;
        }
        return inorder(root->right, k);
    }
    int kthSmallest(TreeNode* root, int k) {
        return inorder(root, k);
    }
};