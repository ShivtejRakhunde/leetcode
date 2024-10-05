class Solution {
    public int missingNumber(int[] nums) {
        int sum1 = 0, sum2 = 0;
        int n = nums.length;
        for(int a:nums){
            sum1+=a;
        }
        sum2 = n*(n+1)/2;
        return sum2-sum1;
    }
}