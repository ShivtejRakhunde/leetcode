class Solution {
    public int majorityElement(int[] nums) {
        int n = nums.length;

        Map<Integer, Integer> mp = new HashMap<>();

        // Counting occurrences of each element
        for (int num : nums) {
            mp.put(num, mp.getOrDefault(num, 0) + 1);
        }

        // Checking for the majority element
        for (Map.Entry<Integer, Integer> entry : mp.entrySet()) {
            if (entry.getValue() > n / 2) {
                return entry.getKey();
            }
        }
        return -1;
    }
}