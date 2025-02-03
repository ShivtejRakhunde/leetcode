class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int increaseL = 1, decreaseL = 1;
        int maxL = 1;

        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]<nums[i+1]){
                increaseL++;
                decreaseL = 1;
            }
            else if(nums[i]>nums[i+1]){
                increaseL = 1;
                decreaseL++;
            }
            else{
                increaseL = 1;
                decreaseL = 1;
            }
            maxL = max(maxL, max(increaseL, decreaseL));
        }
            return maxL;
    }
};