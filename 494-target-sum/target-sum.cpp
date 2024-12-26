class Solution {
public:
    int totalways = 0;

    int findTargetSumWays(vector<int>& nums, int target) {
        ways(nums, 0, 0, target);
        return totalways;
    }

private:
    void ways(vector<int>& nums, int Cindex, int Csum, int target){
        //if we reached the end of array
        if(Cindex == nums.size()){
            //check if sum & target are equal
            if(Csum == target){
                totalways+=1;
            }
        }
        else{
                //add current number || +
                ways(nums, Cindex+1, Csum + nums[Cindex], target);
                //substract current number || -
                ways(nums, Cindex+1, Csum - nums[Cindex], target);
        }
    }
};