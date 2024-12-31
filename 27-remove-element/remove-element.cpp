class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ans = 0;

        for(int c=0; c<nums.size(); c++){
            if(val!=nums[c]){
                nums[ans] = nums[c];
                ans++;
            }
        }
        return ans;
    }
};