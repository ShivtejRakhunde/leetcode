class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        int k = 0; //longest streak
        unordered_set<int> st(nums.begin(), nums.end()); //set storing all nums

        for(int i: nums){
            int cs = 0; //current streak
            long long c = i; //current element
            
            //Continue the streak as long as we can find the next square in the set
            while(st.find((int)c)!=st.end()){
                cs++;
                //break if next square is greater than 10^5
                if(c*c>1e5){
                    break;
                }

                c = c*c;
            }
            k = max(k, cs);
        }

        return k < 2 ? -1 : k;
    }
};