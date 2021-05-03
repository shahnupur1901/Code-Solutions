/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode detectCycle(ListNode head) {
        if(head==null || head.next==null) return null;
        ListNode p = head;
        ListNode q = head;
        while(p!=null && q!=null){
            p = p.next;
            if(q.next==null) return null; 
            q = q.next.next;
            if(p==q)
                break;
        }
    if(p==null || q==null) return null;
        p = head;
        while(p!=q){
            p = p.next;
            q = q.next;
        }
        return p;
        
    }
}
