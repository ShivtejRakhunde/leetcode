class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> result(boxes.length(), 0);
        int n = boxes.length();

        for(int i=0; i<n; i++){
            if(boxes[i]=='1'){
                for(int j=0; j<n; j++){
                    result[j] += abs(i-j);
                }
            }
        }

        return result;
    }
};