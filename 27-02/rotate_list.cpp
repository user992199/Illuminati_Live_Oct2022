#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    int find_length(ListNode * & tail){
        int len = 1;
        while(tail -> next){
            tail = tail -> next;
            len++;
        }
        return len;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return head;
        ListNode * tail = head;
        int len = find_length(tail);
        tail -> next = head;
        k %= len;
        for(int i = 1; i <= len-k; i++){
            head = head -> next;
        }
        ListNode * prev = head;
        head = head -> next;
        prev -> next = nullptr;
        return head;
    }
};
int main(){
    Solution s;
    int k;
    ListNode * head = nullptr;
    head = s.rotateRight(head, k);
    return 0;
}