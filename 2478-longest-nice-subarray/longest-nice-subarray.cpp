class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int usedBit = 0;
        int s = 0, maxl = 0;

        for(int e=0; e<nums.size(); e++){
            //If current number shares bits with window,
            //remove left part until there's no bit conflict
            while((usedBit & nums[e])!=0){
                usedBit ^= nums[s]; //// Remove leftmost element's bits
                s++;
            }

            usedBit |= nums[e]; //// Add current number to the window

            maxl = max(maxl, e-s+1);
        }

        return maxl;
    }
};