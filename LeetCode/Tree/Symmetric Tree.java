/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public boolean isSymmetric(TreeNode root) {
        return chksymm(root.left,root.right);
    }
    public boolean chksymm(TreeNode p, TreeNode q){
    if(p==null && q==null) return true;
    if(p==null || q==null) return false;
    if(p.val == q.val){
        return chksymm(p.left , q.right) && chksymm(p.right , q.left);
    }
        return false;
    
        }
    }
    
