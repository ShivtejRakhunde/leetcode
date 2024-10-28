class Solution {
    public int longestSquareStreak(int[] nums) {
        int k = 0; //longest streak
        Set<Integer> st = new HashSet<>(); // Set to store all elements in nums

        // Add all elements from nums to the set
        for (int num : nums) {
            st.add(num);
        }

        for(int i: nums){
            int cs = 0; //current streak
            long c = i; //current element
            
            //Continue the streak as long as we can find the next square in the set
            while(st.contains((int)c)){
                cs++;
                //break if next square is greater than 10^5
                if(c*c>100000){
                    break;
                }

                c = c*c;
            }
            k = Math.max(k, cs);
        }

        return k < 2 ? -1 : k;
    }
}