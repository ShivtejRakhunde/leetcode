class Solution {
    public int maxProfit(int[] prices) {
        int buy = prices[0], profit = 0;

        for(int num: prices){
            buy = Math.min(buy, num);

            profit = Math.max(profit, num-buy);
        }
        return profit;
    }
}