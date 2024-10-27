class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        int k = 0;

        vector<vector<int>> dp(r+1, vector<int>(c+1,0));

        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(matrix[i][j]==1){
                    dp[i+1][j+1] = min({dp[i][j+1], dp[i+1][j], dp[i][j]}) + 1;
                    k = k + dp[i+1][j+1];
                }
            }
        }
        return k;
    }
};