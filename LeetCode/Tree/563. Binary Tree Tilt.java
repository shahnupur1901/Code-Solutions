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
    public int findTilt(TreeNode root) {
        return tilt(root,0);
    }
    public int tilt(TreeNode root, int t){
        if(root!=null){
            t = t + Math.abs(treeSum(root.left) - treeSum(root.right)) + tilt(root.left,t) + tilt(root.right,t);
            return t;
        }
        return t;
    }
    public int treeSum(TreeNode root){
        if(root!=null){
            return root.val + treeSum(root.left) + treeSum(root.right); 
        }
        return 0;
    }
}
