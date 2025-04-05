class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int n = nums.size();
        for(int i=0; i<n; i++){
            int digit = 0, sum = 0; 
            int temp = nums[i];
            while(temp>0){
                digit = temp%10;
                sum = sum*10 + digit;
                temp /= 10;
            }
            st.insert(sum);
        }

        return st.size();
    }
};