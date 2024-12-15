class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows==0){
            return {};
        }
        if(numRows==1){
            return {{1}};
        }
        vector<vector<int>> result = generate(numRows-1);
        vector<int> newRow(numRows, 1);
        for(int i = 1; i < numRows-1; i++){
            newRow[i] = result.back()[i-1] + result.back()[i];

        }
        result.push_back(newRow);
        return result;
    }
};