class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int> res;
        int l = 0;
        int consec_cnt = 1;
        
        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i - 1] + 1 == nums[i]) {
                consec_cnt++;
            }
            
            if (i - l + 1 > k) {
                if (nums[l] + 1 == nums[l + 1]) {
                    consec_cnt--;
                }
                l++;
            }
            
            if (i - l + 1 == k) {
                res.push_back(consec_cnt == k ? nums[i] : -1);
            }
        }
        
        return res;
    }
};