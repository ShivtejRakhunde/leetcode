class Solution {
    public long maxKelements(int[] nums, int k) {
        long score = 0;
        int n = nums.length;
        PriorityQueue<Integer> hp = new PriorityQueue<Integer>(Collections.reverseOrder());

        for(int c=0;c<n;c++){
            hp.add(nums[c]);
        }

        for(int i=1;i<=k;i++){
            int max = hp.peek();
            score += max; 
            hp.remove();
            hp.add((int) Math.ceil(max/3.0));
        }
        return score;
    }
}