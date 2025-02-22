class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int b = prices[0], s = 0;

        for(int i=1; i<prices.size(); i++){
            if(b>prices[i]){
                b = prices[i];
            }
            
            if(prices[i] - b > s){
                s = prices[i] - b;
            }
        }
        return s;
    }
};