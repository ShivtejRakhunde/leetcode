class Solution {
    public int[] minOperations(String boxes) {
        int[] result = new int[boxes.length()];
        int n = boxes.length();

        for(int i=0; i<n; i++){
            if(boxes.charAt(i)=='1'){
                for(int j=0; j<n; j++){
                    result[j] += Math.abs(i-j);
                }
            }
        }

        return result;
    }
}