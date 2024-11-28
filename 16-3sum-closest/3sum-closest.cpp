class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int closest = INT_MAX/2;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                for(int k = j+1; k < nums.size(); k++){
                    int sum = nums[i]+nums[j]+nums[k];
                    if(abs(sum-target) < abs(closest-target)){
                        closest = sum;
                    }
                }
            }
        }
        return closest;
    }
};