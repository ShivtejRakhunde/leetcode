class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> lessp;
        vector<int> equalp;
        vector<int> highp;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < pivot){
                lessp.push_back(nums[i]);
            }
            else if(nums[i] == pivot){
                equalp.push_back(nums[i]);
            }
            else{
                highp.push_back(nums[i]);
            }
        }

        
        vector<int> result;
        result.insert(result.end(), lessp.begin(), lessp.end());
        result.insert(result.end(), equalp.begin(), equalp.end());
        result.insert(result.end(), highp.begin(), highp.end());

        return result;
    }
};
