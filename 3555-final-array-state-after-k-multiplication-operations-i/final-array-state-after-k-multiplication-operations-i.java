class Solution {
    public int[] getFinalState(int[] nums, int k, int multiplier) {
        int n = nums.length;

        for(int i=0; i<k; i++){
            int minI = 0;
            for(int j=0; j<n; j++){
                if(nums[j]<nums[minI]){
                    minI = j;
                }
            }
            nums[minI] *= multiplier; 
        }

        return nums;
    }
}