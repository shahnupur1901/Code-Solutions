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
    public TreeNode invertTree(TreeNode root) {
        if(root==null) return null;
        TreeNode ptr = root.left, ptr1, ptr2;
        root.left = root.right;
        root.right = ptr;
        ptr1 = invertTree(root.left);
        ptr2 = invertTree(root.right);
        return root;
        
        
    }
   
}
