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
    public boolean isCousins(TreeNode root, int x, int y) {
        if(root.val==x || root.val==y) return false;
        return findParent(root,x).equals(findParent(root,y))==false && depth(root,x,0) == depth(root,y,0);
    }
    public TreeNode findParent(TreeNode root, int x){
    
      if(root==null) return null;
       if(root.left==null && root.right==null) return null;
        if(root.left!=null){
            if(root.left.val == x)
                return root;
        }
        if(root.right!=null){
            if(root.right.val ==x)
                return root;
        }
        if(root.left!=null && root.right!=null){
            TreeNode p = findParent(root.left, x);
            TreeNode q = findParent(root.right, x);
            return p==null ? q:p;
        }
        else if(root.left==null && root.right!=null){
            TreeNode q = findParent(root.right, x);
            return q;
        }
        else if(root.left!=null && root.right==null){
            TreeNode q = findParent(root.left, x);
            return q;
        }
        return null;
        
    }
    public int depth(TreeNode root, int x, int level){
        if(root==null) return -1;
        if(root.val == x) return 1+level;
        int l = depth(root.left, x,level+1);
        if(l!=-1) return l;
        int lr = depth(root.right, x,level+1);
        return lr;
    }
  
}
