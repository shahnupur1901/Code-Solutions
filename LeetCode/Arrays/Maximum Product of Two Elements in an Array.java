class Solution {
    public int maxProduct(int[] nums) {
       int m1=0, m2=0,idx=0;
    for(int i=0;i<nums.length;i++){
        if(m1<nums[i]){
            m1 = nums[i];
            idx = i;
        }
    }
        for(int i=0;i<nums.length;i++){
        if(m2<nums[i] && i!=idx){
            m2 = nums[i];
        }
    }
        return (m1-1)*(m2-1);
    
}
}
