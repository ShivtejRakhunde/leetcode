class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum1 = 0, sum2 = 0;
        for(auto n:nums){
            sum1+=n;
        }
        for(int i=1;i<=nums.size();i++){
            sum2+=i;
        }
        return sum2-sum1;
    }
};