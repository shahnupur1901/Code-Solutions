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
    bool isPalindrome(ListNode* head) {
        ListNode* ptr1 = head;
        ListNode* ptr2 = head;
        int idx=-1;
        int flag=0;
        if(head==NULL || head->next==NULL)
            return true;
        while(ptr1!=NULL){
            idx++;
            ptr1 = ptr1->next;
        }
        ptr1 = head;
        int i = 0;
        int c;
        while(i<=(idx+1)/2){
            c = 0;
            ptr2=head;
            while(c<idx-i){
                ptr2=ptr2->next;
                c++;
            }
            if(ptr2->val!=ptr1->val){
                return false;
            }
            ptr1=ptr1->next;
            i++;
            
        }
        return true;
    
      
    }
};
