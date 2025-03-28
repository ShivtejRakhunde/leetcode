class Solution {
public:
    long long findScore(vector<int>& nums) {
        long long score = 0;

        for(int i=0; i<nums.size(); i+=2){
            int a = i;

            while(i+1<nums.size() && nums[i+1]<nums[i]){
                i++;
            }

            for(int b=i; b>=a; b-=2){
                score += nums[b];
            }
        }
        return score;
    }
};