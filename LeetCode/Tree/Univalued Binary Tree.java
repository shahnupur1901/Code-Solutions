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
    public boolean isUnivalTree(TreeNode root) {
        int x = root.val;
        return inorder(x,root);
    }
    boolean inorder(int x, TreeNode root){
        if(root!=null){
            if(root.val!=x) return false;
            return inorder(x,root.left) && inorder(x,root.right);
        }
        return true;
    }
}
