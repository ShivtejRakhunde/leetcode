class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int splits = 0;
        int n = nums.size();
        long long sumleft = 0, sumright = 0;

        for(auto c: nums){
            sumright += c;
        }

        for(int i=0; i<n-1; i++){
            sumleft += nums[i];
            sumright -= nums[i];

            if(sumleft >= sumright){
                splits++;
            }
        }
        return splits;
    }
};