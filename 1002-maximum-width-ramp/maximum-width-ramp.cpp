class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size();
        int rmp = 0;
        vector<int> st; // To store indices in decreasing order of nums

        // First pass: build the decreasing stack of indices
        for (int i = 0; i < n; ++i) {
            if (st.empty() || nums[st.back()] > nums[i]) {
                st.push_back(i);
            }
        }

        // Second pass: iterate from the end of the array to find the maximum ramp
        for (int i = n - 1; i >= 0; --i) {
            while (!st.empty() && nums[st.back()] <= nums[i]) {
                rmp = max(rmp, i - st.back());
                st.pop_back();
            }
        }

        return rmp;
    }
};