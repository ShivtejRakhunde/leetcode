class Solution {
public:
    void prmute(vector<int>& nums, int s, vector<vector<int>>& ans){
        if(s == nums.size()){
            ans.push_back(nums);
            return;
        }

        for(int i=s; i<nums.size(); i++){
            swap(nums[s],nums[i]);
            prmute(nums, s+1, ans);
            swap(nums[s], nums[i]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        prmute(nums, 0, ans);
        return ans;
    }
};