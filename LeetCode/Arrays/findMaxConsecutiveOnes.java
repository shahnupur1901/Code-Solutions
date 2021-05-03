class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int maxcount=0,count=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]==1) count++;
            if(nums[i]==0){
                if(maxcount<count)
                    maxcount = count;
                count=0;
            }
        }
        if(maxcount<count)
                    maxcount = count;
        return maxcount;
        
    }
}
