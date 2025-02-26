class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int MAXsum1 = 0, MINsum2 = 0, ans = 0;

        for(int i=0; i<nums.size(); i++){
            ans += nums[i];
            MAXsum1 = max(MAXsum1, ans);
            MINsum2 = min(ans, MINsum2);
        }
        
        return abs(MAXsum1 - MINsum2);
    }
};