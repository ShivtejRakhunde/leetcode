class Solution {
    public int maxProfit(int[] prices) {
        int buy = prices[0], profit = 0;

        for(int num: prices){
            if(num < buy){
                buy = num;
            }

            if(num - buy > profit){
                profit = num - buy;
            }
        }
        return profit;
    }
}