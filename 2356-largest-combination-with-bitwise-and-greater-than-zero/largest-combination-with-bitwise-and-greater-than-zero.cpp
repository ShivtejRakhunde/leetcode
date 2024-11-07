class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int bitsum = 0;
        
        for(int i=0; i<32; i++){
            int k = 0;
            for(auto c:candidates){
                if(c & (1<<i)){
                    k++;
                }
            }
            bitsum = max(bitsum, k);
        }
        return bitsum;
    }
};