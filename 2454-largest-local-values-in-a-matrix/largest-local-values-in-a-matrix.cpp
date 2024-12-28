class Solution {
public:
    int findMax(vector<vector<int>>& grid, int a, int b){
        int maxe = 0;
        for(int i=a; i<a+3; i++){
            for(int j=b; j<b+3; j++){
                maxe = max(maxe, grid[i][j]);
            }
        }
        return maxe;
    }

    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> ans(n-2, vector<int>(n-2,0));

        for(int i=0; i<n-2; i++){
            for(int j=0; j<n-2; j++){
                ans[i][j] = findMax(grid, i, j);
            }
        }

        return ans;
    }
};