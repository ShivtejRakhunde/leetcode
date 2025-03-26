class Solution {
public:
    int CheckOperations(vector<int>& temp, int x){
        int op = 0;
        int CommNum = temp[temp.size()/2];  //median element 

        for(int i=0; i<temp.size(); i++){
            if(temp[i]%x != CommNum%x){
                return -1;
            }
            else{
                op += abs(CommNum - temp[i])/x;
            }
        }
        return op;
    }

    int minOperations(vector<vector<int>>& grid, int x) {
        
        vector<int> temp;

        for (const auto& row : grid) {
            for (int num : row) {
                temp.push_back(num);
            }
        }

        sort(temp.begin(), temp.end());

        return CheckOperations(temp, x);
    }
};