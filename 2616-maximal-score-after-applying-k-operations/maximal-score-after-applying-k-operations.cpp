class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long score = 0;
        //int n = nums.size();
        priority_queue<int> hp;

        for(int c:nums){
            hp.push(c);
        }

        for(int i=1;i<=k;i++){
            int max = hp.top();
            score += max; 
            hp.pop();
            hp.push(ceil(max/3.0));
        }
        return score;
    }
};