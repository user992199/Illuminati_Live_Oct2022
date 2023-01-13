class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // base case
        if(!root) return NULL;
        // recursive case

        if(root -> val == p -> val or root -> val == q -> val) return root;

        TreeNode * left = lowestCommonAncestor(root -> left, p, q);
        TreeNode * right = lowestCommonAncestor(root -> right, p, q);
        // if lst mein bhi ek node mill gya aur rst mein bhi ek node mill gya
        // tabh root is lca
        if(left and right) return root;
        // agar rst mein node nahi milla, lekin lst mein mill gya
        // to left child ko return
        else if(left) return left;
        // if lst mein kuch nahi milla aur rst mein node mill gya, 
        // to return right
        // else agar kisi bhi st mein kuch nahi milla
        // tabh return NULL/left/right
        return right;
    }
};