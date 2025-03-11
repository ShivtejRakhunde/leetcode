class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int, int> mp;

        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }

        for(auto num: mp){
            if(num.second > n/2){
                return num.first;
            }
        }
        return -1;
    }
};