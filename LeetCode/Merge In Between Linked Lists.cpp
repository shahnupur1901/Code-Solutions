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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* ptr1 = list1;
        ListNode* ptr2 = list1;
        int c=0;
        while(c!=a-1){
            ptr1 = ptr1->next;
            c++;
        }
        ptr2 = ptr1;
        while(c!=b){
            ptr2=ptr2->next;
            c++;
        }
        ptr2=ptr2->next;
        ptr1->next = list2;
        ListNode* ptr3 = list2;
        while(ptr3->next!=NULL){
            ptr3 = ptr3->next;
        }
        ptr3->next = ptr2;
        return list1;
        
    }
};
