class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(int num: nums){
            mp[num]++;
        }

        for(int i=0; i<mp.size(); i++){
            if(mp[i]%2==0){
                continue;
            }
            else{
                return false;
            }
        }


        return true;
    }
};