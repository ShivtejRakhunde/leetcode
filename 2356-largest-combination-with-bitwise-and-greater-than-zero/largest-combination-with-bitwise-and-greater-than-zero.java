class Solution {
    public int largestCombination(int[] candidates) {
        int bitsum = 0;
        
        for(int i=0; i<32; i++){
            int k = 0;
            for(int c:candidates){
                if((c & (1<<i)) != 0){
                    k++;
                }
            }
            bitsum = Math.max(bitsum, k);
        }
        return bitsum;
    }
}