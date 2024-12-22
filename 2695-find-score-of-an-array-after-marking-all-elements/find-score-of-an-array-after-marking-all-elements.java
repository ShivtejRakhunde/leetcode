class Solution {
    public long findScore(int[] nums) {
        long score = 0;

        for(int i=0; i<nums.length; i+=2){
            int a = i;

            while(i+1<nums.length && nums[i+1]<nums[i]){
                i++;
            }

            for(int b=i; b>=a; b-=2){
                score += nums[b];
            }
        }
        return score;
    }
}