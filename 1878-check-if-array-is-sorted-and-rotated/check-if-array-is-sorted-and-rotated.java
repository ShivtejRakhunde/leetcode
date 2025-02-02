class Solution {
    public boolean check(int[] nums) {
        int n = nums.length;
        if(n<=1){
            return true;
        }

        int inversionK = 0;

        // For every pair, count the number of inversions.
        for (int i = 1; i < n; ++i) {
            if (nums[i] < nums[i - 1]) {
                ++inversionK;
            }
        }

        // Also check between the last and the first element due to rotation
        if (nums[0] < nums[n - 1]) {
            ++inversionK;
        }

        return inversionK <= 1;
    }
}