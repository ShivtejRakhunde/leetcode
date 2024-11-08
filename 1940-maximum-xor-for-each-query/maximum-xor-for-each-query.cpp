class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n = nums.size();
        int xorP = 0;
        for(int i=0; i<n; i++){
            xorP ^= nums[i];
        }

        vector<int> answer(n);
        int mask = (1 << maximumBit) - 1;

        for(int i=0; i<n; i++){
            answer[i] = xorP ^ mask;
            //remove last element
            xorP ^= nums[n-i-1]; 
        }

        return answer;
    }
};