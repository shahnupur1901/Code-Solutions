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
    public boolean leafSimilar(TreeNode root1, TreeNode root2) {
        ArrayList l1 = new ArrayList();
         ArrayList l2 = new ArrayList();
        leaflist(root1,l1);
        leaflist(root2,l2);
        if(l1.equals(l2))
            return true;
        else
            return false;
    }
    public void leaflist(TreeNode root, ArrayList l){
        if(root!=null){
             leaflist(root.left,l);
            if(root.left==null && root.right==null){
                l.add(root.val);
            }
            leaflist(root.right,l);
        }
    }
    
}
