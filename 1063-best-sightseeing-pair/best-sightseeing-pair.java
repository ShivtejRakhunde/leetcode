class Solution {
    public int maxScoreSightseeingPair(int[] values) {
        int LeftMax = values[0]; //values[i] + i = values[0] +  0
        int ans = 0;  //stores max score

        for(int i=1; i<values.length; i++){
            ans = Math.max(ans, LeftMax + values[i] - i);
            
            LeftMax = Math.max(LeftMax, values[i] + i);
        }

        return ans;
    }
}