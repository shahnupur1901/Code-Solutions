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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode* ptr1=NULL;
        ListNode* ptr2=NULL;
        ListNode* ptr=head;
        ListNode* ptr3=NULL;
        ListNode* ptr4=NULL;
        if(head->next==NULL || m==n)
            return head;
        int c = 0;
        while(ptr!=NULL){
            c++;
            if(c==m-1){
                ptr3=ptr;
            }
            if(c==m){
                ptr1=ptr;
            }
            if(c==n){
                ptr2=ptr;
            }
             if(c==n+1){
                ptr4=ptr;
            }
           ptr=ptr->next;
        }
        ListNode* p1 = ptr1;
        ListNode* p2 = ptr1->next;
            ListNode* p3 = ptr1->next->next; 
        while(p2!=ptr4){
        p2->next = p1;
            p1 = p2;
            p2=p3;
             if(p3!=NULL){
            p3=p3->next;
             }
        }
        ptr1->next = ptr4;
        if(ptr3!=NULL)
        ptr3->next = ptr2;
        if(ptr1==head)
            head = ptr2;
        
        return head;
    }
};Re
