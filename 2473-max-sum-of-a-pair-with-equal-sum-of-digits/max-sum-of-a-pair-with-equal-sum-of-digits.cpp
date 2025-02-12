class Solution {
public:
    int dgtsum(int num){
        int digit, sum = 0;
        while(num>0){
            digit = num%10;
            sum = sum + digit;
            num = num/10;
        }
        return sum;
    }

    int maximumSum(vector<int>& nums) {
        int maxsum = -1;
        unordered_map<int,int> mp;

        for(int i : nums){
            int sumofdgt = dgtsum(i);

            if(mp.find(sumofdgt) != mp.end()){
                maxsum = max(maxsum, mp[sumofdgt]+i);
            }
            
            mp[sumofdgt] = max(mp[sumofdgt], i);
        }
        
        return maxsum;
    }
};