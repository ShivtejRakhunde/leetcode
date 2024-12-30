class Solution {
public:
    int countGoodStrings(int low, int high, int zero, int one) {
        vector<int> dp(high+1,0);
        dp[0] = 1; //good string having zero '0's or one '1's
        int mod = 1e9+7;

        //iterate over each length i
        for(int i=1; i<=high; i++){
            //checking if current string can be made by appending zero '0's or one '1's
            if(i>=zero){
                dp[i] = (dp[i]+dp[i-zero]) % mod;
            }
            if(i>=one){
                dp[i] = (dp[i]+dp[i-one]) % mod; 
            }
        }

        //Addding up count of strings with each valid length [l~h]
        int ans = 0;
        for(int j=low; j<=high; j++){
            ans += dp[j];
            ans %= mod;
        }
        return ans;
    }
};