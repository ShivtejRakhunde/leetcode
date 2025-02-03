class Solution {
    public int longestMonotonicSubarray(int[] nums) {
        int increaseL = 1, decreaseL = 1;
        int maxL = 1;

        for(int i=0; i<nums.length-1; i++){
            if(nums[i]<nums[i+1]){
                increaseL++;
                decreaseL = 1;
            }
            else if(nums[i]>nums[i+1]){
                increaseL = 1;
                decreaseL++;
            }
            else{
                increaseL = 1;
                decreaseL = 1;
            }
            maxL = Math.max(maxL, Math.max(increaseL, decreaseL));
        }
            return maxL;
    }
}