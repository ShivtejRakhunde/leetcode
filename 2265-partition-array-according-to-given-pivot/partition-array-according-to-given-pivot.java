class Solution {
    public int[] pivotArray(int[] nums, int pivot) {
        int counter = 0;
        int[] res = new int[nums.length];
        for (int num : nums) {
            if (num < pivot)
                res[counter++] = num;
        }
        for (int num : nums) {
            if (num == pivot)
                res[counter++] = num;
        }
        for (int num : nums) {
            if (num > pivot)
                res[counter++] = num;
        }
        return res;
    }
}