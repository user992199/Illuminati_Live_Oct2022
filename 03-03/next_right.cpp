/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        Node *c = root, *p = root;
        while(p){
            if(c -> left){
                while(c){
                    c -> left -> next = c -> right;
                    if(c -> next) 
                        c -> right -> next = c -> next -> left;
                    c = c -> next;
                }
            }
            c = p = p -> left;
        }
        return root;
    }
};