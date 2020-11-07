/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* ptr = head;
        int c = 0;
        if(head==NULL)
            return NULL;
        
        while(ptr->next!=NULL){
            ptr=ptr->next;
            c++;
        }
        c++;
        k = c - k%c;
        if(k==c)
            return head;
        int a=0;
        ListNode* ptr1=head;
        while(a!=k-1){
            ptr1 = ptr1->next;
            a++;
        }
        cout<<ptr1->val;
        ListNode* ptr2 = ptr1->next;
        ptr1->next = ptr->next;
        ptr->next = head;
        head= ptr2;
        return head;
    }
};
