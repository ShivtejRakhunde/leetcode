class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int, int> mp;   //ordered map to store entries in ascending order
        vector<vector<int>> result; //stores final answer
        
        //copy the first array as it is
        for(auto a: nums1){
            mp[a[0]] = a[1];
        }

        //add values if exist or create new entries
        for(auto b: nums2){
            mp[b[0]] += b[1];
        }

        //mp to result
        for(auto c: mp){
            result.push_back({c.first, c.second});
        }

        return result;
    }
};