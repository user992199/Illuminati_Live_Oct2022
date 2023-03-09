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
    TreeNode * dfs(TreeNode* root, int target){
        // base case
        if(!root) return 0;
        // recurive case
        root -> left = dfs(root -> left, target);
        root -> right = dfs(root -> right, target);
        if((root -> left) or (root -> right) or root -> val != target){
            return root;
        }
        return 0;
        // if(root -> left == 0 and root -> right == 0 and root -> val == target){
        //     return 0;
        // }
        // return root;
    }
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        return dfs(root, target);
    }
};