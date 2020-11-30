/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* ptr = node->next;
        ListNode* ptr1 = node;
        while(ptr->next!=NULL){
            ptr1->val = ptr->val;
            ptr1=ptr;
            ptr=ptr->next;
        }
        ptr1->val = ptr->val;
    
        ptr1->next = NULL;
    delete ptr;
        return;
    }
};
