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
    public boolean isSameTree(TreeNode p, TreeNode q) {
        ArrayList pl,ql;
        pl = new ArrayList<Integer>();
        ql= new ArrayList<Integer>();
        inorder(p,pl);
        inorder(q,ql);
        if(pl.equals(ql) == false){
            return false;
        }
        preorder(p,pl);
        preorder(q,ql);
         if(pl.equals(ql) == true){
            return true;
        }
        return false;
        }
    public void inorder(TreeNode root, ArrayList l){
        if(root!=null){
            inorder(root.left,l);
            l.add(root.val);
            inorder(root.right,l);
        }
        if(root==null){
            l.add(-1);
        }
    }
    
      public void preorder(TreeNode root, ArrayList l){
        if(root!=null){
            
            l.add(root.val);
            preorder(root.left,l);
            preorder(root.right,l);
        }
            if(root==null){
            l.add(-1);
        }
    }
    
   
}
