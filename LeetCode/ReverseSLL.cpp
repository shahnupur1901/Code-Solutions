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
    ListNode* reverseList(ListNode* head) {
     ListNode* ptr1 = NULL;
    ListNode * ptr2 = head;
    ListNode* ptr3 = head->next;
        while(ptr2!=NULL){
            ptr2->next = ptr1;
            ptr1 = ptr2;
            ptr2=ptr3;
            if(ptr3!=NULL){
            ptr3= ptr3->next;
            }
       
        }
        head = ptr1;
        
     return head;
      
        
        
    }
};
