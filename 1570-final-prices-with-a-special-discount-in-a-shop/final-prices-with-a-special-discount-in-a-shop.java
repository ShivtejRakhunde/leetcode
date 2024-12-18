class Solution {
    public int[] finalPrices(int[] prices) {
        int[] ans = prices.clone();

        for(int i=0; i<prices.length; i++){
            for(int j=i+1; j<prices.length; j++){
                if(prices[i]>=prices[j]){
                    ans[i] = prices[i]-prices[j];
                    break;
                }
            }
        }

        return ans;
    }
}